#import numpy as np
#import pandas as pd
#from sklearn.cluster import KMeans
#import random
#from queue import PriorityQueue
#import time

## 데이터 파일 로드
#def load_data(filename):
#    data = pd.read_csv(filename, header=None)
#    cities = data.to_numpy()
#    return cities

## k-means 군집화 수행
#class KMeansCluster:
#    def __init__(self, k, cities):
#        self.k = k
#        self.cities = cities

#    def cluster(self):
#        kmeans = KMeans(n_clusters=self.k, random_state=57).fit(self.cities)
#        return kmeans.labels_

## 유전 알고리즘을 수행
#class GeneticAlgorithm:
#    # 객체 초기화
#    def __init__(self, cities, population_size, mutation_rate, generations):
#        self.cities = cities
#        self.population_size = population_size
#        self.mutation_rate = mutation_rate
#        self.generations = generations
        
#    # 하나의 개체(=하나의 경로)를 생성
#    def create_individual(self):
#        individual = np.arange(0, len(self.cities))
#        np.random.shuffle(individual[1:]) #인덱스 0은 고정할 것이므로 1부터 shuffle 해준다
#        return individual

#    # 전체 개체 집단을 생성
#    def create_population(self):
#        return np.array([self.create_individual() for _ in range(self.population_size)])
    
#    # 개체의 적합도 계산
#    def fitness(self, individual):
#        total_distance = 0
#        for i in range(len(individual) - 1):
#            total_distance += np.linalg.norm(self.cities[individual[i]] - self.cities[individual[i + 1]]) # norm,을 이용해서 벡터의 크기를 계산
#        total_distance += np.linalg.norm(self.cities[individual[-1]] - self.cities[0])  # Return to start
#        return -total_distance # -붙이는 이유는 목적함수의 최솟값을 구하는 것이므로

#    # 개체 집단을 적합도 순으로 정렬
#    def rank_population(self, population):
#        fitness_results = np.array([self.fitness(individual) for individual in population])
#        return list(np.argsort(fitness_results))

#    #  부모 개체 선택
#    def selection(self, population, ranked_population):
#        selected_indices = []
#        for i in range(len(ranked_population)): 
#            if random.random() < (i + 1) / len(ranked_population): #i가 증갈할수록 확률이  커지는데 그렇게 시행했을 때 그 확률안에 들어오면 그 인덱스의 population을 다음세대로 넘긴다.
#                selected_indices.append(ranked_population[i]) # 결과적으로 랭크수가 큰 부모 = 우수한 유전자가 선택될 확률이 늘어난다
#        return population[selected_indices]
    
#    # 개체의 BFS 서브트리를 생성
#    def bfs_subtree(self, individual, start_node):
#        queue = [start_node]    # 시작 도시는  queue에 포함
#        subtree = {start_node}  # 시작 노드는 subtree에 포함
#        while queue: #queue가 빌 때까지
#            node = queue.pop(0) #맨앞의 노드를 빼낸다
#            for neighbor in individual:
#                if neighbor not in subtree and neighbor not in queue: #subtree 에도 queue에도 없다면
#                    queue.append(neighbor)
#                    subtree.add(neighbor)
#        return subtree

    
#    # 교차 - BFS 활용
#    def crossover(self, parent1, parent2):
#        child = np.zeros(len(parent1), dtype=int)
#        child[0] = parent1[0]  # 첫 번째 노드는 항상 고정

#        parent1_subtree = self.bfs_subtree(parent1, child[0])
#        parent2_subtree = self.bfs_subtree(parent2, child[0])

#        for i in range(1, len(parent1)):
#            if parent1[i] in parent1_subtree:
#                child[i] = parent1[i]
#            elif parent1[i] in parent2_subtree:
#                child[i] = parent2[parent1.tolist().index(parent1[i])]

#        return child

#    # 변이 - 더블 브리지
#    def mutate(self, individual):
#        if random.random() < self.mutation_rate:
#            size = len(individual)
#            pos1 = random.randint(1, size//4)
#            pos2 = random.randint(pos1+1, size//2)
#            pos3 = random.randint(pos2+1, 3*size//4)
#            pos4 = random.randint(pos3+1, size-1)
            
#            p1 = individual[:pos1]
#            p2 = individual[pos2:pos3]
#            p3 = individual[pos4:]
#            p4 = individual[pos1:pos2]
#            p5 = individual[pos3:pos4]
            
#            individual = np.concatenate((p1, p2, p3, p4, p5)) # 원래 배열을 5등분 하여 1,3,5,2,4 순으로 다시 합치기
#        return individual

#    # 실행 - 최적의 개체와 거리를 반환
#    def run(self):
#        population = self.create_population()

#        for generation in range(self.generations):
#            print(f"Generation {generation + 1}")

#            ranked_population = self.rank_population(population)
#            selected_population = self.selection(population, ranked_population)

#            children = []
#            while len(children) < len(population):
#                parent1 = random.choice(selected_population)
#                parent2 = random.choice(selected_population)
#                child = self.crossover(parent1, parent2)
#                child = self.mutate(child)
#                children.append(child)
#            population = np.array(children)

#        best_individual_index = self.rank_population(population)[0]
#        best_individual = population[best_individual_index]
#        best_individual_distance = -self.fitness(best_individual)

#        return best_individual.reshape(-1), best_individual_distance # reshape(-1) 함수를 사용하여, 이 배열을 1차원 배열로 변경한 뒤 위치 정보를 추출



## A* 휴리스틱을 사용하여 군집 간 최단 경로를 탐색
#class AStarHeuristic:
#    # 객체 초기화
#    def __init__(self, cities, paths):
#        self.cities = cities
#        self.paths = paths

#    # 두 도시 간의 유클리드 거리 계산
#    def euclidean_distance(self, city1, city2):
#        return np.linalg.norm(self.cities[city1] - self.cities[city2])

#    # 경로 재구성
#    def reconstruct_path(self, came_from, start, goal):
#        path = [goal]
#        current = goal # 제일 끝 경로부터 시작 경로까지 거꾸로 추적
#        while current != start:
#            current = came_from[current]
#            path.append(current)
#        path.reverse() # 실제 순서대로 구성
#        return path

#    # 실행 - 시작 도시에서 목표 도시까지의 최단 경로와 거리를 반환
#    def run(self, goal):
#        start = 0
#        open_set = PriorityQueue()
#        open_set.put((0, start))

#        came_from = {}
#        g_score = {city: float('inf') for city in range(len(self.cities))}
#        g_score[start] = 0
#        f_score = {city: float('inf') for city in range(len(self.cities))}
#        f_score[start] = self.euclidean_distance(start, goal)

#        open_set_hash = {start}

#        while not open_set.empty():
#            current = open_set.get()[1]
#            open_set_hash.remove(current)

#            if current == goal:
#                return self.reconstruct_path(came_from, start, goal), g_score[goal]

#            for neighbor in self.paths[current]:
#                tentative_g_score = g_score[current] + self.euclidean_distance(current, neighbor)

#                if tentative_g_score < g_score[neighbor]:
#                    came_from[neighbor] = current
#                    g_score[neighbor] = tentative_g_score
#                    f_score[neighbor] = g_score[neighbor] + self.euclidean_distance(neighbor, goal)

#                    if neighbor not in open_set_hash:
#                        open_set.put((f_score[neighbor], neighbor))
#                        open_set_hash.add(neighbor)
#        return None, float('inf')

#class TSP:
#    # 객체 초기화, 데이터 로드
#    def __init__(self, data_filename):
#        self.data_filename = data_filename
#        self.cities = load_data(self.data_filename)

#    # TSP 문제 해결
#    def solve(self):
#        k = 6# 군집은 5개로 지정
#        k_means = KMeansCluster(k, self.cities)
#        cluster_labels = k_means.cluster()

#        # 각 군집에 대해 유전 알고리즘을 실행, 결과 저장
#        cluster_results = []
#        for i in range(k):
#            cluster_cities = self.cities[cluster_labels == i] #클러스터 레이블이 i에 해당하는 도시들을 모두 넣어준다
#            ga = GeneticAlgorithm(cluster_cities, population_size=50, mutation_rate=0.1, generations=1000)
#            best_individual, best_individual_distance = ga.run()
#            cluster_results.append((best_individual, best_individual_distance))

#        # 나눠진 군집은 A* 알고리즘을 사용하여 merge
#        merged_path, merged_distance = self.merge_paths(cluster_results)

#        return merged_path, merged_distance
    
#    # TSP 문제의 최종 경로를 합치는 과정
#    def merge_paths(self, paths):
#        paths = sorted(paths, key=lambda x: x[1])  # 경로를 거리가 짧은 순서로 정렬
#        start = paths.pop(0)  # start에서 가장 짧은 경로를 찾아 이어 붙임

#        while paths:
#            closest_path, closest_distance = None, float('inf')
#            closest_index = -1
#            for i, (path, distance) in enumerate(paths):
#                # 가장 가까운 경로를 찾는 알고리즘은 A star 휴리스틱 사용
#                a_star = AStarHeuristic(self.cities, {start[0][-1]: [path[0]]})
#                new_path, new_distance = a_star.run(path[0])

#                if new_distance < closest_distance:
#                    closest_path, closest_distance = path, new_distance
#                    closest_index = i

#            # start와 가장 가까운 군집 경로를 결합
#            paths.pop(closest_index)
#            start = (np.concatenate([start[0], closest_path]), start[1] + closest_distance)

#        return start

#    # 최단 경로와 총 거리를 출력
#    def display_result(self, path, distance):
#        print("최단 경로: ", path)
#        print("총 거리: ", distance)

## 데이터 로드, TSP solve() 호출
#tsp = TSP("2023_AI_TSP.csv")
#start_time = time.time()
#final_path, final_distance = tsp.solve()
#end_time = time.time()

## 결과 출력
#tsp.display_result(final_path, final_distance)

## 최단 경로 저장
#with open('example_solution.csv', 'w+') as f:
#    for city in final_path:
#        f.write(f"{city}\n")

## 실행 시간 출력
#print(f"Execution time: {end_time - start_time} seconds")
import random
import math
import numpy as np
import csv
import matplotlib.pyplot as plt
import time

MUTATION_RATE = 5
MUTATION_COUNT = 2
THRESHOLD = 350000

import pandas as pd

def read_csv(csvfile):
    df = pd.read_csv(csvfile)
    print(df)
    return df.values

# Call the read_csv function with the name of your CSV file
csvfile = 'TSP.csv'
City = read_csv(csvfile)


cityCoordinates = read_csv(csvfile)
citySize = len(read_csv(csvfile))







class Genome():
    chromosomes = []
    fitness = 100000

    def __init__(self, numberOfchromosomes=None):
        if numberOfchromosomes is not None:
            self.chromosomes = list(range(numberOfchromosomes))
            randShuffle(self.chromosomes)


def randShuffle(listToShuffle):
    return random.shuffle(listToShuffle)

def init_population(populationSize):
    population = []
    for i in range(populationSize):
        genome = Genome(None)
        genome.chromosomes = list(range(citySize))
       
        # Set the first city as the starting point
        start_city = genome.chromosomes[0]
        genome.chromosomes.remove(start_city)
        genome.chromosomes.insert(0, start_city)
         # Shuffle the list of cities
        random.shuffle(genome.chromosomes)
        genome.fitness = Evaluate(genome.chromosomes)
        population.append(genome)
    return population

def Evaluate(chromosomes):#거리비교
    Fitness = 0
    for i in range(len(chromosomes) - 1):
        p1 = cityCoordinates[chromosomes[i]]
        p2 = cityCoordinates[chromosomes[i + 1]]
        Fitness += Euclidean_distance(p1, p2)
    Fitness = np.round(Fitness, 2)
    return Fitness

def Euclidean_distance(x, y):#거리계산
    dist = np.linalg.norm(np.array(x)-np.array(y))
    return dist


def findBestGenome(population):#좋은 유전자 찾기
    allFitness = [i.fitness for i in population]
    bestFitness = min(allFitness)
    return population[allFitness.index(bestFitness)]

#선택 연산 _ Selection

def Selection(population, k):
    select = [population[random.randrange(0, len(population))] for i in range(k)]
    bestGenome = findBestGenome(select)
    return bestGenome

def Reproduction(population):
    parent1 = Selection(population, 20).chromosomes
    parent2 = Selection(population, 20).chromosomes
    while parent1 == parent2:
        parent2 = Selection(population, 15).chromosomes

    return Crossover(parent1, parent2)

def randRange(first,last):
    return random.randint(first,last)

#교차 연산 _ Crossover


def Crossover(parent1, parent2):
    child = Genome(None)
    child.chromosomes = []
    firstIndex = randRange(0,len(parent1)-1)
    secondIndex = randRange(firstIndex, len(parent1)-1)
    innerSet = parent1[firstIndex:secondIndex]
    startSet = []
    endSet = []
    for _, value in enumerate([item for item in parent2 if item not in innerSet]):
        if len(startSet)<firstIndex:
            startSet.append(value)
        else:
            endSet.append(value)
    child.chromosomes = startSet + innerSet + endSet
    
    if random.randrange(0, 100) < MUTATION_RATE:
        child.chromosomes = Mutation(child.chromosomes)
    
    child.fitness = Evaluate(child.chromosomes)
    return child

#변이 연산 _ Mutation

def Mutation(chromo) :
    for x in range(MUTATION_COUNT):
        p1, p2 = [random.randrange(1, len(chromo) - 1) for i in range(2)]
        while p1 == p2 or p1 > p2:
            p1 = random.randint(0, len(chromo) - 1)
            p2 = random.randint(0, len(chromo) - 1)
        log = chromo[p1:p2]
        log = log[::-1]
        chromo = chromo[:p1] + log +chromo[p2:]
    return chromo

#시각화 _ Visualization
def fitness_plot(generation, allBestFitness):
    plt.plot(range(0, generation), allBestFitness, c='blue')
    plt.xlabel('Generations')
    plt.ylabel('Best Fitness')
    plt.title('Fitness Function')
    plt.show()
    
def city_visualize(bestGenome, city):
    start = city[0]
    plt.scatter(start[0], start[1], c="green", marker=">")
    plt.annotate("Start", (start[0] + 2, start[1] - 2), color='red')
    
    #edge 표현을 위한 x, y 범위
    x_edge = [city[i][0] for i in bestGenome.chromosomes]
    y_edge = [city[i][1] for i in bestGenome.chromosomes]

    plt.plot(x_edge, y_edge, color="blue", linewidth=0.07, linestyle="-")
    plt.xlabel('x')
    plt.ylabel('y')
    plt.title('City Edges')
    plt.show()

def GeneticAlgorithm(populationSize, Generation_Count):
    allBestFitness = []
    population = init_population(populationSize)
    generation = 0
    TotalBestFitness = 100000
    TotalBestPath = []
    
    start = time.time()
    
    while generation < Generation_Count:
        generation += 1

        for i in range(populationSize):
            population.append(Reproduction(population))
        
        for genom in population:
            if genom.fitness > THRESHOLD:
                population.remove(genom)
        
        averageFitness = round(np.sum([genom.fitness for genom in population]) / len(population), 2)
        bestGenome = findBestGenome(population)
        if bestGenome.fitness < TotalBestFitness:
            TotalBestFitness = bestGenome.fitness
            TotalBestPath = bestGenome.chromosomes
        print("\n" * 5)
        print("Generation: {0}\nPopulation Size: {1}\t Average Fitness: {2}\nBest Fitness: {3}"
              .format(generation, len(population), averageFitness,
                      bestGenome.fitness))

        allBestFitness.append(bestGenome.fitness)
    
    print("\nTotal Best Fitness : ",TotalBestFitness)
    
    end = time.time()
    
    print("Total time : ", end-start) # 소요 시간 표기, Working Time
    
    #시각화
    fitness_plot(generation, allBestFitness)
    city_visualize(bestGenome, cityCoordinates)

    #csv 파일 경로 저장
    f = open('temp.csv', 'w', newline='')
    wr = csv.writer(f)
    for i in range(0, citySize):
        wr.writerow([TotalBestPath[i]])
    f.close()

if __name__ == "__main__":
    GeneticAlgorithm(populationSize=20, Generation_Count=5000) #Population size, Generation Count 입력


