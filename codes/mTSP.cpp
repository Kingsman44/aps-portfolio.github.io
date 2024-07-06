#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

// Represents a city
struct City {
    int x, y;
};

// Represents a chromosome (solution)
struct Chromosome {
    vector<int> route;
    double fitness;
};

// Calculates the distance between two cities
double distance(const City& c1, const City& c2) {
    return sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
}

// Calculates the total distance of a route
double calculateDistance(const vector<City>& cities, const vector<int>& route) {
    double totalDistance = 0;
    for (int i = 0; i < route.size() - 1; i++) {
        totalDistance += distance(cities[route[i]], cities[route[i + 1]]);
    }
    return totalDistance;
}

// Calculates the fitness of a chromosome
double calculateFitness(const vector<City>& cities, const Chromosome& chromosome) {
    double totalDistance = calculateDistance(cities, chromosome.route);
    return 1.0 / totalDistance;
}

// Performs crossover between two chromosomes
void crossover(Chromosome& c1, Chromosome& c2) {
    int size = c1.route.size();
    int start = rand() % size;
    int end = rand() % (size - start) + start;

    vector<int> temp(size);
    for (int i = 0; i < size; i++) {
        temp[i] = c1.route[i];
    }

    for (int i = start; i <= end; i++) {
        c1.route[i] = c2.route[i];
        c2.route[i] = temp[i];
    }
}

// Performs mutation on a chromosome
void mutate(Chromosome& chromosome) {
    int size = chromosome.route.size();
    int i = rand() % size;
    int j = rand() % size;
    swap(chromosome.route[i], chromosome.route[j]);
}

// Solves the mTSP using a Genetic Algorithm
vector<Chromosome> solvemTSP(const vector<City>& cities, int numSalesmen, int populationSize, int generations) {
    // Initialize the population
    vector<Chromosome> population(populationSize);
    for (auto& chromosome : population) {
        chromosome.route = vector<int>(cities.size());
        iota(chromosome.route.begin(), chromosome.route.end(), 0);
        random_shuffle(chromosome.route.begin(), chromosome.route.end());
    }

    // Evaluate the initial population
    for (auto& chromosome : population) {
        chromosome.fitness = calculateFitness(cities, chromosome);
    }

    // Evolve the population
    for (int gen = 0; gen < generations; gen++) {
        // Selection (Tournament Selection)
        vector<Chromosome> parents(populationSize);
        for (int i = 0; i < populationSize; i++) {
            int p1 = rand() % populationSize;
            int p2 = rand() % populationSize;
            parents[i] = population[population[p1].fitness > population[p2].fitness ? p1 : p2];
        }

        // Crossover and Mutation
        for (int i = 0; i < populationSize; i += 2) {
            crossover(parents[i], parents[i + 1]);
            mutate(parents[i]);
            mutate(parents[i + 1]);
        }

        // Evaluate the offspring
        for (auto& chromosome : parents) {
            chromosome.fitness = calculateFitness(cities, chromosome);
        }

        // Survivor Selection (Elitism)
        sort(parents.begin(), parents.end(), [](const Chromosome& c1, const Chromosome& c2) {
            return c1.fitness > c2.fitness;
        });
        for (int i = 0; i < populationSize; i++) {
            population[i] = parents[i];
        }
    }

    // Sort the population by fitness
    sort(population.begin(), population.end(), [](const Chromosome& c1, const Chromosome& c2) {
        return c1.fitness > c2.fitness;
    });

    return population;
}

int main() {
    // Example usage
    vector<City> cities = {{0, 0}, {1, 1}, {2, 2}, {3, 3}, {4, 4}, {5, 5}};
    int numSalesmen = 2;
    int populationSize = 100;
    int generations = 1000;

    auto start = chrono::high_resolution_clock::now();
    vector<Chromosome> population = solvemTSP(cities, numSalesmen, populationSize, generations);
    auto end = chrono::high_resolution_clock::now();

    cout << "Optimal routes:" << endl;
    for (int i = 0; i < numSalesmen; i++) {
        cout << "Salesman " << i << ": ";
        for (int city : population[i].route) {
            cout << city << " ";
        }
        cout << endl;
    }

    cout << "Total time: " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms" << endl;

    return 0;
}