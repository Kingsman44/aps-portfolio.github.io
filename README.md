
# Swiggy Portfolio

<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Name</dt>
<dd>Shivan Singh</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
<dt>Portfolio Topic/Domain</dt>
<dd>Swiggy</dd>
</dl>

* * *

> A step towards better food delivery management
>
> Kingsman44

#### Note:
This page hosts:

1. Introduction
2. Objectives
3. Business Use Cases
4. Learnings and key takeaways

# Business Use Cases:

## 1. Live Search Completion or suggestion in Swiggy App

### Use Case:

Swiggy aims to provide users with the most relevant suggestions for restaurants and food items.
-   Vast and dynamic data
-   Diverse user queries (typos, abbreviations, preferences)
-   Search needs to include food as well as restaurants.

Excepted Results:

 - Search for Pizz.
 - Show Pizza, Dominos Pizza, Pizza Hut etc...

![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/d91fb926-0c6a-4231-ba83-3a1dc6e34307)


Algorithms:

- **Trie (Prefix Tree):**
    
    -   **Structure:** A tree-like structure where each node represents a prefix of a word.
    -   **Use:** Efficiently finds all words starting with a given prefix, ideal for substring matching and auto-suggestions.
    -   **Time Complexity (Search):** O(L), where L is the length of the query.
    -   **Space Complexity:** O(N*L), where N is the number of words and L is the average word length.
-   **Inverted Index:**
    
    -   **Structure:** A mapping of keywords to the documents (food items or restaurants) they appear in.
    -   **Use:** Quickly retrieves all documents containing a specific keyword, ideal for broader keyword searches.
    -   **Time Complexity (Search):** O(k), where k is the number of documents containing the keyword.
    -   **Space Complexity:** O(N*L), where N is the number of documents and L is the average document length.
    
   **Approach:**
    -   **Design:** Combine tries and inverted indexes to handle both substring and keyword searches.
    -   **Implementation:** Use tries for substring matching and auto-suggestions as the user types. Use the inverted index for broader keyword searches.
 
## 2. Ranked Search Result Swiggy App

### Use Case:

Swiggy aims to provide users with the most relevant and fastest search results for restaurants and food items.

-   Vast and dynamic data
-   Diverse user queries (typos, abbreviations, preferences)
-   Search needs to include food as well as restaurants.

Excepted Results:

 - Ranked Search for Pizza by most popular

![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/728c50ca-6242-487a-8747-0f67ac87638f)

Algorithms:

- **Quick Sort:**
    -   **Time Complexity (Search):** O(N log(n))
    -   **Space Complexity:** O(log(n))

**Aproach**
**Weighted Sum Model Implementation:**
1.  **Assign Weights:**
    -   Query Relevance: 0.4
    -   User Preferences: 0.2
    -   Proximity: 0.2
    -   Ratings/Popularity: 0.15
    -   Promotions/Offers: 0.05
2.  **Calculate Score:** For each restaurant, calculate a weighted sum score based on the assigned weights and the restaurant's performance in each factor
3.  **Sorting the Weighted Sum Model:**
    - Using QuickSort to sort the results, and show to users

## 3. Enhancing Food Recommendations using Graph Methods

### Use Case:
Swiggy aims to provide users with personalized and relevant food recommendations based on their preferences and the relationships between food items.

**Algorithms:**

#### 1. Graph Embedding (Node2Vec):
- **Purpose:** Learn low-dimensional vector representations of nodes (food items) in a graph, capturing the structural and semantic relationships between them.
- **Application:** Construct a graph representing the relationships between food items (e.g., co-occurrence, substitutes, complements) and use Node2Vec to learn embeddings for each item.
- **Time Complexity:** O(d * V * E), where d is the dimensionality of the embeddings, V is the number of nodes, and E is the number of edges.
- **Space Complexity:** O(V + E), where V is the number of nodes and E is the number of edges.

#### 2. Random Walk-based Recommendation:
- **Purpose:** Leverage the learned graph embeddings to generate personalized food recommendations for users.
- **Application:** Perform random walks starting from the user's preferred food items to explore the graph and identify relevant recommendations.
- **Time Complexity:** O(k * V), where k is the number of random walks and V is the number of nodes.
- **Space Complexity:** O(V + E), where V is the number of nodes and E is the number of edges.

**Approach:**
1. Construct a food item graph based on various relationships (e.g., co-occurrence, substitutes, complements).
2. Use Node2Vec to learn low-dimensional embeddings for each food item, capturing their structural and semantic relationships.
3. Perform random walks starting from the user's preferred food items to explore the graph and identify relevant recommendations.
4. Combine the recommendations from the random walk-based approach with other recommendation techniques (e.g., collaborative filtering, content-based filtering) to provide a comprehensive and personalized food recommendation experience.

By leveraging graph-based methods, Swiggy can enhance its food recommendations by capturing the complex relationships between food items and providing more relevant and personalized suggestions to users.

## 4. Contextual Bandits for Ads Recommendations

### Use Case:
Swiggy's advertising platform aims to provide users with relevant and engaging advertisements based on their context and preferences.

**Algorithms:**

#### 1. Contextual Multi-Armed Bandits:
- **Purpose:** Dynamically optimize the selection of advertisements shown to users based on their context and past interactions.
- **Application:** Model the ad recommendation problem as a contextual multi-armed bandit, where each ad is an "arm" and the user's context (e.g., location, time of day, browsing history) is the "context".
- **Time Complexity:** O(K * log(t)), where K is the number of ads (arms) and t is the number of iterations.
- **Space Complexity:** O(K), where K is the number of ads (arms).

**Approach:**
1. Represent each user's context as a feature vector, capturing relevant information about the user's preferences and behavior.
2. Model the ad recommendation problem as a contextual multi-armed bandit, where each ad is an "arm" and the user's context is the "context".
3. Use a contextual bandit algorithm, such as LinUCB or Thompson Sampling, to dynamically select the most relevant ads to display to the user based on their context and past interactions.
4. Continuously update the bandit's model as new user interactions and feedback are observed, allowing the system to adapt and improve its recommendations over time.

By employing contextual multi-armed bandits, Swiggy's advertising platform can provide users with more relevant and engaging advertisements, leading to increased user engagement and ad revenue.

## 5. Identifying Fraud Rings Using Domain-Aware Weighted Community Detection

### Use Case:
Swiggy needs to detect and prevent fraudulent activities, such as fake accounts, coordinated attacks, and collusion, to ensure the integrity of its platform.

**Algorithms:**

#### 1. Domain-Aware Weighted Community Detection:
- **Purpose:** Identify groups of connected entities (e.g., users, devices, accounts) that exhibit fraudulent behavior.
- **Application:** Construct a weighted graph representing the relationships between entities (e.g., based on shared attributes, co-occurrences, or interactions) and apply community detection algorithms to identify densely connected subgroups that may represent fraud rings.
- **Time Complexity:** O(V + E), where V is the number of nodes and E is the number of edges in the graph.
- **Space Complexity:** O(V + E), where V is the number of nodes and E is the number of edges in the graph.

**Approach:**
1. Collect and preprocess data from various sources (e.g., user accounts, device information, transaction logs) to construct a weighted graph representing the relationships between entities.
2. Incorporate domain-specific knowledge and features (e.g., user profiles, device characteristics, transaction patterns) to weight the edges in the graph, reflecting the likelihood of fraudulent connections.
3. Apply community detection algorithms, such as Louvain or Label Propagation, to identify densely connected subgroups in the graph that may represent fraud rings.
4. Analyze the detected communities and their characteristics to prioritize investigations and take appropriate actions to mitigate the identified fraudulent activities.

![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/1aa055c6-78de-4672-856b-b4fb14def1bf)

By leveraging domain-aware weighted community detection, Swiggy can effectively identify and disrupt fraud rings, improving the overall integrity and trustworthiness of its platform.

## 6. Assignment & Routing Optimization for Swiggy Instamart Delivery

### Use Case:
Swiggy's Instamart service needs to efficiently assign delivery executives to incoming orders and optimize their routes to ensure timely and cost-effective deliveries.

**Algorithms:**

#### 1. Bipartite Matching for Assignment:
- **Purpose:** Assign delivery executives to incoming orders in a way that maximizes the overall efficiency and minimizes delivery times.
- **Application:** Model the assignment problem as a bipartite matching problem, where delivery executives and orders are the two sets of nodes, and the edges represent the feasibility and cost of an assignment.
- **Time Complexity:** O(√(V) * E), where V is the number of nodes (delivery executives and orders) and E is the number of edges (feasible assignments).
- **Space Complexity:** O(V + E), where V is the number of nodes and E is the number of edges.

#### 2. Vehicle Routing Problem (VRP) for Routing:
- **Purpose:** Optimize the delivery routes for each assigned delivery executive to minimize the total distance traveled, delivery time, and other relevant factors.
- **Application:** Formulate the routing problem as a VRP and solve it using algorithms like Genetic Algorithms or Simulated Annealing.
- **Time Complexity:** Depends on the specific VRP algorithm used, but can range from O(n^2 * 2^n) to O(n^3), where n is the number of orders.
- **Space Complexity:** O(n), where n is the number of orders.

**Approach:**
1. Use bipartite matching to efficiently assign delivery executives to incoming orders, considering factors like proximity, availability, and delivery time.
2. For each assigned delivery executive, solve the VRP to optimize the delivery route, taking into account factors like traffic conditions, vehicle capacity, and delivery time constraints.
3. Continuously monitor and update the assignment and routing decisions as new orders arrive and real-time conditions change.

![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/2a066b2e-7453-41a5-8764-52765519d9fc)

By combining bipartite matching for assignment and VRP for routing, Swiggy can optimize the Instamart delivery operations, ensuring timely and cost-effective deliveries to customers.

## 7. Predicting Food Delivery Time at Cart

### Use Case:
Swiggy needs to provide customers with accurate estimates of food delivery times at the cart stage to set appropriate expectations and improve the overall user experience.

**Algorithms:**

#### 1. Time Series Forecasting:
- **Purpose:** Predict the food delivery time for a given order based on historical data and real-time factors.
- **Application:** Use time series forecasting techniques, such as ARIMA or Prophet, to model the delivery time as a function of various features (e.g., restaurant location, order details, traffic conditions).
- **Time Complexity:** Depends on the specific time series model used, but often O(n log n) or O(n^2), where n is the number of data points.
- **Space Complexity:** O(n), where n is the number of data points.

#### 2. Queueing Theory:
- **Purpose:** Estimate the expected waiting time and delivery time for an order based on the current state of the system (e.g., restaurant processing capacity, delivery executive availability).
- **Application:** Model the food delivery process as a queueing system and use queueing theory to calculate the expected delivery time for a given order.
- **Time Complexity:** Depends on the specific queueing model used, but often involves solving a system of equations.
- **Space Complexity:** O(n), where n is the number of system parameters.

**Approach:**
1. Collect historical data on food delivery times, including order details, restaurant information, and real-time factors (e.g., traffic conditions, weather).
2. Use time series forecasting techniques to model the delivery time as a function of various features and make predictions for new orders.
3. Complement the time series forecasting model with a queueing theory-based approach to estimate the expected waiting time and delivery time based on the current state of the system.
4. Combine the predictions from both models to provide customers with accurate and reliable delivery time estimates at the cart stage.

By leveraging time series forecasting and queueing theory, Swiggy can improve the accuracy of its delivery time estimates, leading to better customer experience and satisfaction.

## 8. Personalizing Swiggy POP Recommendations

### Use Case:
Swiggy's POP service aims to provide users with a curated and personalized menu of single-serve, quick-checkout meals. To achieve this, Swiggy needs to efficiently generate a list of eligible food items and then rank them based on user preferences and other factors.

**Algorithms:**

#### 1. Trie (Prefix Tree) for Eligibility:
- **Purpose:** Efficiently find all food items starting with a given prefix, ideal for handling diverse user queries (typos, abbreviations, etc.).
- **Application:** Build a Trie data structure to store all the food items in Swiggy's POP catalog. When a user starts typing a prefix, traverse the Trie to generate a list of eligible food items.
- **Time Complexity (Search):** O(L), where L is the length of the user's query.
- **Space Complexity:** O(N*L), where N is the number of food items and L is the average length of a food item.

#### 2. Inverted Index for Personalization:
- **Purpose:** Quickly retrieve all food items containing a specific keyword, ideal for broader searches and personalization.
- **Application:** Create an inverted index that maps keywords to the food items they appear in. Use this index to rank the eligible food items based on their relevance to the user's preferences and other factors.
- **Time Complexity (Search):** O(k), where k is the number of food items containing the keyword.
- **Space Complexity:** O(N*L), where N is the number of food items and L is the average length of a food item.

## 9. Finding All Restaurants Near Me Using Geospatial Data Structures

### Use Case: 
Swiggy aims to provide users with a list of nearby restaurants based on their current location. To achieve this, Swiggy needs to efficiently find all restaurants within a given radius or distance from the user's location.

**Algorithms:**

## 1. Geospatial Data Structures:

-   **Purpose:** Store and query geospatial data efficiently, such as restaurant locations.
-   **Application:** Use a geospatial data structure like a k-d tree or a quadtree to store the restaurant locations and perform range queries to find all restaurants within a given radius.
-   **Time Complexity:** O(log n) for insertion and O(n) for range queries, where n is the number of restaurants.
-   **Space Complexity:** O(n), where n is the number of restaurants.

## 2. Rectangular range query:

-   **Purpose:** Find all restaurants within a given radius or distance from the user's location.
-   **Application:** Use the geospatial data structure to perform range queries, which return all restaurants within the specified distance or radius.
-   **Time Complexity:** O(√n+k) for range queries, where n is the number of restaurants.
-   **Space Complexity:** O(n), where n is the number of restaurants.

**Approach:**

1.  **Data Collection:** Collect the locations of all restaurants in the Swiggy database.
2.  **Geospatial Data Structure:** Construct a geospatial data structure K-D Tree to store the restaurant locations.
3.  **Range Query:** Perform a range query on the geospatial data structure to find all restaurants within a given radius or distance from the user's location.
4.  **Result Filtering:** Filter the results to include only restaurants that are open and available for delivery.

<img width="461" alt="image" src="https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/2882c7bf-8a62-48bc-9e1d-5e954128d8de">

## 10. Finding the Delivery Charges

## Use Case:

Swiggy aims to provide users with the most efficient route and distance between their current location and a selected restaurant to calculate fare. To achieve this, Swiggy can leverage Dijkstra's algorithm to find the shortest path and distance between the user's location and the restaurant.

**Algorithms:**

## 1. Dijkstra's Algorithm:

-   **Purpose:** Find the shortest path between two nodes in a weighted graph.
-   **Application:** Represent the road network as a weighted graph, where nodes represent intersections or points of interest, and edges represent road segments with associated weights.
-   **Time Complexity:** O((E + V) log V), where E is the number of edges and V is the number of vertices in the graph.
-   **Space Complexity:** O(V), where V is the number of vertices in the graph.

**Approach:**

1.  **Construct the Road Network Graph:** Represent the road network as a weighted graph, where nodes represent intersections or points of interest, and edges represent road segments with associated weights.
2.  **Perform Dijkstra's Algorithm:** Use Dijkstra's algorithm to find the shortest path between the user's location and the selected restaurant. The algorithm will explore the graph, keeping track of the shortest distance to each node, and eventually return the shortest path and distance.
3.  **Provide the Fare:** Calculate fare


## 11. Shortest Path for Multi-Parcel Delivery

### Use Case:

Swiggy wants to optimize the delivery routes for delivery personnel who can carry 1-2 parcels at a time to ensure timely and efficient deliveries.

-   Multiple delivery addresses
-   Capacity constraint (1-2 parcels at a time)
-   Dynamic traffic conditions

**Algorithm:**

-   **Multiple Traveling Salesman Problem (mTSP):**
    -   **Use:** Extends the classic Traveling Salesman Problem to multiple salesmen (delivery personnel), optimizing the delivery routes for each person while considering capacity constraints.
    -   **Time Complexity:** O((N!)^M), where N is the number of locations and M is the number of delivery personnel.
    -   **Space Complexity:** O(N*M)

**Approach:**

1.  **Graph Representation:** Model the delivery area as a weighted graph with nodes (delivery addresses) and edges (distances between addresses).
2.  **Capacity Constraints:** Include constraints that limit each delivery person to carry a maximum of 2 parcels at a time.
3.  **Route Optimization:** Use a heuristic or approximation algorithm to solve the mTSP, finding the optimal routes for each delivery person.

### Detailed Steps:

1.  **Data Collection:**
    
    -   Collect data on delivery addresses, distances between them, and current traffic conditions.
    -   Include information about the capacity of each delivery person (1-2 parcels).
2.  **Graph Representation:**
    
    -   Represent the delivery area as a weighted graph G(V, E) where V is the set of delivery locations and E is the set of edges representing distances between locations.
3.  **Initialization:**
    
    -   Initialize the mTSP problem with the number of delivery personnel (salesmen) and the capacity constraint (1-2 parcels).
4.  **Heuristic Solution:**
    
    -   Use a heuristic approach, such as the Genetic Algorithm or Ant Colony Optimization, to find near-optimal solutions for the mTSP:
        -   **Genetic Algorithm:**
            -   **Encoding:** Represent each potential solution (route) as a chromosome.
            -   **Fitness Function:** Define a fitness function that evaluates the total travel distance while respecting capacity constraints.
            -   **Selection, Crossover, Mutation:** Apply genetic operators to evolve the population towards better solutions.
        -   **Ant Colony Optimization:**
            -   **Pheromone Update:** Use pheromone trails to guide the search for optimal routes.
            -   **Heuristic Information:** Incorporate heuristic information (e.g., distance, traffic conditions) to influence the route construction.
5.  **Solution Refinement:**
    
    -   Refine the solution by iterating through the heuristic algorithm until convergence or a satisfactory solution is found.
    -   Ensure that each delivery person’s route does not exceed the capacity constraint of carrying 1-2 parcels at a time.
6.  **Real-time Adjustments:**
    
    -   Continuously update the routes based on real-time traffic data and new incoming orders.
    -   Use Dijkstra’s algorithm or A* search to make real-time adjustments to the routes for efficiency.
7.  **Implementation:**
    
    -   Deploy the optimized routes to the delivery personnel via a mobile application.
    -   Provide real-time navigation and updates to ensure timely deliveries.

## 12. Sorting and Filtering Food Items

### Use Case:

Swiggy aims to provide users with the ability to sort and filter food items based on various criteria such as price, rating, delivery time, and dietary preferences. This enhances the user experience by allowing customers to find items that meet their specific needs quickly.

-   Vast and diverse food menu
-   Multiple sorting and filtering criteria
-   Real-time performance

**Algorithm:**

-   **Merge Sort:**
    -   **Use:** Efficiently sorts large lists based on various criteria.
    -   **Time Complexity:** O(N log N)
    -   **Space Complexity:** O(N)

