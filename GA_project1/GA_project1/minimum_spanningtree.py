#import random
#import math
#import numpy as np
#import csv
#import matplotlib.pyplot as plt
#import time

#MUTATION_RATE = 1
#MUTATION_COUNT = 2
#THRESHOLD = 1000
#UNIFORMCROSSOVER_RATE = 0.3

#import pandas as pd

#def read_csv(csvfile):
#    df = pd.read_csv(csvfile)
#    print(df)
#    return df.values

## Call the read_csv function with the name of your CSV file
#csvfile = 'TSP.csv'
#City = read_csv(csvfile)


#cityCoordinates = read_csv(csvfile)
#citySize = len(read_csv(csvfile))

#class Genome():
#    chromosomes = []
#    fitness = 100000

#    def __init__(self, numberOfchromosomes=None):
#        if numberOfchromosomes is not None:
#            self.chromosomes = list(range(numberOfchromosomes))
#            randShuffle(self.chromosomes)


#def randShuffle(listToShuffle):
#    return random.shuffle(listToShuffle)

#def init_population(populationSize):
#    population = []
#    for i in range(populationSize):
#        genome = Genome(None)
#        genome.chromosomes = list(range(citySize))
#        random.shuffle(genome.chromosomes[900:999])
#        start_city = genome.chromosomes[900]
#        genome.chromosomes.remove(start_city)
#        genome.chromosomes.insert(0, start_city)
#        genome.fitness = Evaluate(genome.chromosomes[900:999]) # 900번 부터 999번 인덱스 만으로 거리 계산
#        population.append(genome)
#    return population

#def Evaluate(chromosomes):#거리비교
#    Fitness = 0
#    for i in range(len(chromosomes) - 1):
#        p1 = cityCoordinates[chromosomes[i]]
#        p2 = cityCoordinates[chromosomes[i + 1]]
#        Fitness += Euclidean_distance(p1, p2)
#    Fitness = np.round(Fitness, 2)
#    return Fitness

#def Euclidean_distance(x, y):#거리계산
#    dist = np.linalg.norm(np.array(x)-np.array(y))
#    return dist


#def findBestGenome(population):#좋은 유전자 찾기
#    allFitness = [i.fitness for i in population]
#    bestFitness = min(allFitness)
#    return population[allFitness.index(bestFitness)]

##선택 연산 _ Selection

#def TournamentSelection(population, k):
#    select = [population[random.randrange(0, len(population))] for i in range(k)]
#    bestGenome = findBestGenome(select)
#    return bestGenome

#def Reproduction(population):
#    parent1 = TournamentSelection(population, 15).chromosomes
#    parent2 = TournamentSelection(population, 15).chromosomes
#    while parent1 == parent2:
#        parent2 = TournamentSelection(population, 15).chromosomes

#    return OrderCrossover(parent1, parent2)

#def randRange(first,last):
#    return random.randint(first,last)

##교차 연산 _ Crossover


#def OrderCrossover(parent1, parent2):
#    child = Genome(None)
#    child.chromosomes = []
#    firstIndex = randRange(0,len(parent1)-1)
#    secondIndex = randRange(firstIndex, len(parent1)-1)
#    innerSet = parent1[firstIndex:secondIndex]
#    startSet = []
#    endSet = []
#    for _, value in enumerate([item for item in parent2 if item not in innerSet]):
#        if len(startSet)<firstIndex:
#            startSet.append(value)
#        else:
#            endSet.append(value)
#    child.chromosomes = startSet + innerSet + endSet
    
#    if random.randrange(0, 100) < MUTATION_RATE:
#        child.chromosomes[500:1000] = InversionMutation(child.chromosomes[500:1000])
    
#    child.fitness = Evaluate(child.chromosomes[500:1000])
#    return child

##변이 연산 _ Mutation

#def InversionMutation(chromo) :
#    for x in range(MUTATION_COUNT):
#        p1, p2 = [random.randrange(1, len(chromo) - 1) for i in range(2)]
#        while p1 == p2 or p1 > p2:
#            p1 = random.randint(0, len(chromo) - 1)
#            p2 = random.randint(0, len(chromo) - 1)
#        log = chromo[p1:p2]
#        log = log[::-1]
#        chromo = chromo[:p1] + log +chromo[p2:]
#    return chromo

##시각화 _ Visualization
#def fitness_plot(generation, allBestFitness):
#    plt.plot(range(0, generation), allBestFitness, c='blue')
#    plt.xlabel('Generations')
#    plt.ylabel('Best Fitness')
#    plt.title('Fitness Function')
#    plt.show()
    
#def city_visualize(bestGenome, city):
#    start = city[0]
#    plt.scatter(start[0], start[1], c="green", marker=">")
#    plt.annotate("Start", (start[0] + 2, start[1] - 2), color='red')
    
#    #edge 표현을 위한 x, y 범위
#    x_edge = [city[i][0] for i in bestGenome.chromosomes]
#    y_edge = [city[i][1] for i in bestGenome.chromosomes]

#    plt.plot(x_edge, y_edge, color="blue", linewidth=0.07, linestyle="-")
#    plt.xlabel('x')
#    plt.ylabel('y')
#    plt.title('City Edges')
#    plt.show()

#def GeneticAlgorithm(populationSize, Generation_Count):
#    allBestFitness = []
#    population = init_population(populationSize)
#    generation = 0
#    TotalBestFitness = 100000
#    TotalBestPath = []
#    TotalBestdistance = 0

#    start = time.time()
    
#    while generation < Generation_Count:
#        generation += 1

#        for i in range(populationSize):
#            population.append(Reproduction(population))
        
#        for genom in population:
#            if genom.fitness < THRESHOLD:
#                population.remove(genom)
        
#        averageFitness = round(np.sum([genom.fitness for genom in population]) / len(population), 2)
#        bestGenome = findBestGenome(population)
#        if bestGenome.fitness < TotalBestFitness:
#            TotalBestFitness = bestGenome.fitness
#            TotalBestPath = bestGenome.chromosomes

        
#        print("\n" * 5)
#        print("Generation: {0}\nPopulation Size: {1}\t Average Fitness: {2}\nBest Fitness: {3}"
#              .format(generation, len(population), averageFitness,
#                      bestGenome.fitness))

#        allBestFitness.append(bestGenome.fitness)
    
#    print("\nTotal Best Fitness : ",TotalBestFitness)
    
#    end = time.time()
    
#    print("Total time : ", end-start) # 소요 시간 표기, Working Time
    
# #시각화
#    fitness_plot(generation, allBestFitness)
#    city_visualize(bestGenome, cityCoordinates)

#    #csv 파일 경로 저장
#    f = open('temp.csv', 'w', newline='')
#    wr = csv.writer(f)
#    for i in range(0, citySize):
#        wr.writerow([TotalBestPath[i]])
#    f.close()

#if __name__ == "__main__":
#    GeneticAlgorithm(populationSize=15, Generation_Count=500) 