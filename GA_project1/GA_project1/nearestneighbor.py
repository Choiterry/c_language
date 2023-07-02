#import numpy as np
#import pandas as pd
#import matplotlib.pyplot as plt
#import random
#import math
#import time
#import csv


## Read city coordinates from CSV file
#df = pd.read_csv('TSP.csv')
#coordinates = df.to_numpy()


## Define function to calculate Euclidean distance
#def distance(p1, p2):
#    return np.sqrt(np.sum((p1 - p2)**2))

## Define function to find nearest neighbor for a given city
#def nearest_neighbor(city, unvisited_cities):
#    distances = [distance(city, c) for c in unvisited_cities]
#    return np.argmin(distances)

## Define function to solve TSP using nearest neighbor algorithm
#def solve_tsp_nn(coordinates):
#    n_cities = len(coordinates)
#    # Start with city 0
#    current_city = coordinates[0]
#    unvisited_cities = np.delete(coordinates, 0, axis=0)
#    # Initialize list of visited cities with city 0
#    visited_cities = [current_city]

#    while len(unvisited_cities) > 0:
#        # Find nearest unvisited city
#        nearest = nearest_neighbor(current_city, unvisited_cities)
#        # Add nearest city to visited cities list
#        visited_cities.append(unvisited_cities[nearest])
#        # Set nearest city as current city and remove it from unvisited cities
#        current_city = unvisited_cities[nearest]
#        unvisited_cities = np.delete(unvisited_cities, nearest, axis=0)

#    # Add city 0 to the end of visited cities list to complete the tour
#    visited_cities.append(coordinates[0])
#    return visited_cities

## Solve TSP using nearest neighbor algorithm
#tour = solve_tsp_nn(coordinates)

#class Genome:
#    def __init__(self, tour=None):
#        if tour is not None:
#            self.chromosomes = tour
#        else:
#            self.chromosomes = []
#        self.fitness = None

#    def calculate_fitness(self):
#        self.fitness = total_distance(self.chromosomes)


#def randShuffle(listToShuffle):
#    return random.shuffle(listToShuffle)

#def init_population(populationSize):
#    population = []
#    for i in range(populationSize):
#        genome = Genome(None)
#        genome.chromosomes = list(tour)
#        # Shuffle the first 900 cities, and keep the first 100 cities in place
#        shuffled_cities = genome.chromosomes[900:]
#        random.shuffle(shuffled_cities)
#        genome.chromosomes = genome.chromosomes[:900] + shuffled_cities
#        genome.calculate_fitness()  # calculate initial fitness
#        population.append(genome)
#    return population

#def total_distance(tour):
#    dist = 0
#    for i in range(len(tour) - 1):
#        dist += distance(tour[i], tour[i+1])
#    dist += distance(tour[-1], tour[0]) # Add distance from last city back to first city
#    return dist


#def tournament_selection(population, k):
#    selected = []
#    for i in range(k):
#        candidates = random.sample(population, 2)
#        winner = min(candidates, key=lambda x: x.fitness)
#        selected.append(winner)

#    # Perform crossover
#    parent1, parent2 = selected[0].chromosomes, selected[1].chromosomes
#    parent1 = np.array(parent1)
#    parent2 = np.array(parent2)
#    offspring1, offspring2 = cycle_crossover(parent1, parent2)

#    # Evaluate fitness of offspring
#    offspring1_distance = total_distance(offspring1)
#    offspring2_distance = total_distance(offspring2)
#    offspring1_fitness = 1 / offspring1_distance
#    offspring2_fitness = 1 / offspring2_distance

#    # Create new genomes for offspring
#    offspring1_genome = Genome(offspring1, offspring1_fitness)
#    offspring2_genome = Genome(offspring2, offspring2_fitness)

#    return selected + [offspring1_genome, offspring2_genome]

   

#def cycle_crossover(parent1, parent2, fixed_cities):
#    size = len(parent1)
#    offspring1 = [-1] * size
#    offspring2 = [-1] * size
    
#    # Select indices to be inherited from parent1
#    indices = random.sample(range(size), size - len(fixed_cities))
#    indices.sort()
    
#    # Copy fixed cities to offspring
#    for i, city in enumerate(fixed_cities):
#        offspring1[city - 1] = city
#        offspring2[city - 1] = city
    
#    # Inherit genes from parent1
#    for index in indices:
#        offspring1[index] = parent1[index]
#        offspring2[index] = parent2[index]
    
#    # Inherit remaining genes using cycle crossover
#    cycle = 1
#    while -1 in offspring1:
#        if cycle % 2 == 1:
#            current_parent = parent2
#            current_offspring = offspring1
#        else:
#            current_parent = parent1
#            current_offspring = offspring2
        
#        idx = indices[cycle // 2]
#        while current_offspring[idx] == -1:
#            current_offspring[idx] = current_parent[idx]
#            idx = indices[current_parent.index(current_offspring[idx])]
        
#        cycle += 1
    
#    return offspring1, offspring2









#population = init_population(15)

#select=tournament_selection(population,k=2)

#print(select)

#parent1, parent2 = select
#offspring1, offspring2 = cycle_crossover(parent1.chromosomes, parent2.chromosomes)

## Calculate offspring distances
#offspring1_distance = total_distance(offspring1)
#offspring2_distance = total_distance(offspring2)

#print("Offspring 1: ", offspring1, "Distance: ", offspring1_distance)






