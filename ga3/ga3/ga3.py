import random
import math
import pandas as pd
import numpy as np


import random

# 도시의 좌표
city_list = [(0,0), (1,1), (2,2), (3,3), (4,4)]

# 유전자 표현 방법 선택
def create_individual():
    individual = random.sample(range(len(city_list)), len(city_list))
    return individual

# 초기 집단 생성
def create_population(population_size):
    population = []
    for i in range(population_size):
        population.append(create_individual())
    return population

# 적합도 함수 정의
def fitness(individual):
    distance = 0
    for i in range(len(individual) - 1):
        city1 = city_list[individual[i]]
        city2 = city_list[individual[i+1]]
        distance += ((city1[0] - city2[0])**2 + (city1[1] - city2[1])**2)**0.5
    return distance

# 선택 연산
def selection(population):
    parents = []
    for i in range(2):
        parent = random.choice(population)
        parents.append(parent)
    return parents

# 교차 연산
def crossover(parents):
    child = [None]*len(parents[0])
    start = random.randint(0, len(parents[0])-1)
    end = random.randint(start+1, len(parents[0]))
    child[start:end] = parents[0][start:end]
    for i in range(len(parents[1])):
        if parents[1][i] not in child:
            for j in range(len(child)):
                if child[j] is None:
                    child[j] = parents[1][i]
                    break
    return child

# 돌연변이 연산
def mutation(individual):
    i = random.randint(0, len(individual)-1)
    j = random.randint(0, len(individual)-1)
    individual[i], individual[j] = individual[j], individual[i]
    return individual

# 종료 조건 검사
def termination(population, generation):
    if generation >= 100:
        return True
    if min([fitness(individual) for individual in population]) == 0:
        return True
    return False

# GA 알고리즘
def ga_tsp():
    population = create_population(10)
    generation = 0
    while not termination(population, generation):
        new_population = []
    for i in range(len(population)):
        parents = selection(population)
        child = crossover(parents)
    if random.random() < 0.1:
        child = mutation(child)
        new_population.append(child)
        population = new_population
        generation += 1
    best_individual = min(population, key=fitness)
    best_distance = fitness(best_individual)
    print(f"최적 경로: {best_individual}, 최단 거리: {best_distance}")

ga_tsp()