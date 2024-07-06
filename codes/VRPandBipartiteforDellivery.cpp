#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

class VRP {
public:
    int numOrders;
    vector<vector<int>> distances;
    
    VRP(int n, vector<vector<int>>& dist) {
        numOrders = n;
        distances = dist;
    }
    
    vector<int> solveVRP() {
        vector<int> route(numOrders);
        for (int i = 0; i < numOrders; i++) {
            route[i] = i;
        }
        return route;
    }
};

class BipartiteMatching {
public:
    int numDeliveryExecutives;
    int numOrders;
    vector<vector<int>> costs;
    
    BipartiteMatching(int m, int n, vector<vector<int>>& c) {
        numDeliveryExecutives = m;
        numOrders = n;
        costs = c;
    }
    
    vector<int> solveAssignment() {
        vector<int> match(numOrders, -1);
        vector<bool> used(numOrders, false);
        
        for (int i = 0; i < numDeliveryExecutives; i++) {
            int j;
            while (true) {
                j = -1;
                for (int k = 0; k < numOrders; k++) {
                    if (!used[k] && (j == -1 || costs[i][k] < costs[i][j])) {
                        j = k;
                    }
                }
                if (j == -1) {
                    break;
                }
                used[j] = true;
                int k;
                for (k = 0; k < numOrders; k++) {
                    if (match[k] == j) {
                        break;
                    }
                }
                if (k == numOrders) {
                    while (true) {
                        int p = match[j];
                        match[j] = i;
                        i = p;
                        j = k;
                        if (i == -1) {
                            break;
                        }
                        for (k = 0; k < numOrders; k++) {
                            if (match[k] == i) {
                                break;
                            }
                        }
                    }
                }
            }
        }
        
        return match;
    }
};

int main() {
    int numOrders = 5;
    vector<vector<int>> distances = {{0, 2, 4, 1, 3},
                                     {2, 0, 1, 3, 4},
                                     {4, 1, 0, 2, 1},
                                     {1, 3, 2, 0, 2},
                                     {3, 4, 1, 2, 0}};
    
    VRP vrp(numOrders, distances);
    vector<int> route = vrp.solveVRP();
    
    int numDeliveryExecutives = 3;
    vector<vector<int>> costs = {{2, 4, 1, 3, 5},
                                 {1, 3, 2, 4, 2},
                                 {3, 2, 4, 1, 3}};
    
    BipartiteMatching bm(numDeliveryExecutives, numOrders, costs);
    vector<int> assignment = bm.solveAssignment();
    
    cout << "VRP Route: ";
    for (int i : route) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Assignment: ";
    for (int i = 0; i < numOrders; i++) {
        cout << assignment[i] << " ";
    }
    cout << endl;
    
    return 0;
}