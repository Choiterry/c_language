import pandas as pd
import numpy as np
import math
import random

def subdivide_cities(filename):
    # CSV 파일에서 도시들의 위치 정보를 읽어옴
    df = pd.read_csv(filename)
    cities = df.values.tolist()

    # 각 도시의 x, y 좌표 추출하여 numpy 배열로 변환
    xy = np.array(cities)[:, 0:]

    # x, y 좌표값의 최솟값과 최댓값 계산
    x_min, y_min = np.min(xy, axis=0)
    x_max, y_max = np.max(xy, axis=0)

    # 전체 영역을 10x10 크기의 서브트리로 나눔
    subregions = []
    for i in range(10):
        subregions.append([])
        for j in range(10):
            x_range = np.logical_and(xy[:, 0] >= x_min + i * (x_max - x_min) / 10,
                                      xy[:, 0] < x_min + (i + 1) * (x_max - x_min) / 10)
            y_range = np.logical_and(xy[:, 1] >= y_min + j * (y_max - y_min) / 10,
                                      xy[:, 1] < y_min + (j + 1) * (y_max - y_min) / 10)
            subregion = xy[np.logical_and(x_range, y_range)]
            subregions[i].append(subregion)

    distances = []
    for i in range(10):
        for j in range(10):
            cities = subregions[i][j]
            random.shuffle(cities)
            total_distance = 0
            for k in range(len(cities) - 1):
                x1, y1 = cities[k]
                x2, y2 = cities[k + 1]
                distance = math.sqrt((x1 - x2)**2 + (y1 - y2)**2)
                total_distance += distance
            distances.append(total_distance)

    # 반환값
    return distances


# 함수 호출 및 결과 출력
distances = subdivide_cities('TSP.csv')
print(distances)