
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

#### Note:
This Portfolio hosts:

1. Introduction
2. Objectives
3. Business Use Cases
4. Learnings and key takeaways


# 1. Introduction


Swiggy is an India-based platform that allows users to order food online and deliver it to their location. Established in 2014, Swiggy is based in Bangalore and will function in over 580 Indian cities by July 2023. In addition to food delivery, the platform offers instant grocery deliveries through Instamart and a same-day package delivery service known as Swiggy Genie. This portfolio explores how algorithmic problem-solving techniques are used to tackle the daily challenges Swiggy encounters.

The food delivery sector is marked by intricate logistics, extensive data, and the necessity to satisfy a variety of customer preferences. Swiggy, with its customer-centric approach, has adopted algorithmic solutions to tackle challenges directly, showing dedication to innovation and satisfying customers [1]. Swiggy's use of advanced search algorithms to assist users in finding their preferred dishes and optimized routing algorithms for on-time deliveries showcases the company's strong technological capabilities in all facets of its service, making the audience feel integral to the company's operations.

This collection examines various algorithm applications that are important for Swiggy's business model [2]. We will investigate how Swiggy utilizes algorithms to improve search capabilities, offer tailored suggestions, identify fraudulent behavior, streamline delivery routes, handle customer service, and efficiently save and transmit data. These algorithmic solutions not only make Swiggy more efficient but also more customer-focused and adaptable to market demands, instilling confidence in the audience about the company's ability to meet their needs.

This portfolio emphasizes the importance of computational thinking and problem-solving skills in today's business world [3] by demonstrating the various uses of algorithms within Swiggy's ecosystem. It proves Swiggy's dedication to creativity and constant strive for perfection in the food delivery sector.

**References:**

[1] Ritwik Moghe, "Logistic Zones for Assignment," _Swiggy Bytes - Tech Blog_, 2023. [Online]. Available: [https://bytes.swiggy.com/logistic-zones-for-assignment-48d9ce06c4a8](https://bytes.swiggy.com/logistic-zones-for-assignment-48d9ce06c4a8)

[2] Devansh Gupta, "The Swiggy Delivery Challenge (Part Two)," _Swiggy Bytes - Tech Blog_, 2023. [Online]. Available: [https://bytes.swiggy.com/the-swiggy-delivery-challenge-part-two-f095930816e3](https://bytes.swiggy.com/the-swiggy-delivery-challenge-part-two-f095930816e3)

[3] GeeksforGeeks. "Algorithms." [Online]. Available: [https://www.geeksforgeeks.org/fundamentals-of-algorithms/](https://www.geeksforgeeks.org/fundamentals-of-algorithms/)

# 2. Objectives

The primary objectives of this portfolio are to:

1. Illustrate the practical applications of fundamental algorithmic problem-solving techniques, such as graph theory, sorting, searching, and data compression, within the Swiggy food delivery platform context.
    
2. Demonstrate how these techniques can address real-world challenges Swiggy faces, such as optimizing search functionality, personalizing recommendations, detecting fraudulent activities, and enhancing delivery efficiency.
    
3. Evaluate the effectiveness of various algorithms and data structures in addressing these challenges, considering factors like time complexity, space complexity, and overall performance.
    
4. Quantify the potential impact of algorithmic optimizations on key performance indicators, including customer satisfaction, order fulfillment speed, fraud detection rates, and operational costs.
    
5. Underline the importance of continuous innovation and adaptation in algorithmic problem-solving. This is crucial to meet the evolving needs of the food delivery industry and maintain a competitive advantage. It's not just about solving problems, but about constantly improving and staying ahead of the curve.

# 3. Business Use Cases:

## 1. Live Search Completion or suggestion in Swiggy App

**Use Case:** Swiggy acknowledges the significance of providing a seamless user search experience. The app is dedicated to delivering real-time search suggestions to users as they input their queries. These suggestions encompass relevant restaurants, specific dishes, and cuisines, taking into account the user's location, past orders, and current trends. By proactively anticipating user intent and furnishing precise suggestions, Swiggy can effectively streamline the search process, contributing to expedited decision-making and heightened user contentment. This is especially critical during peak hours when users anticipate swift and effortless access to their preferred food choices.

**Challenges:** The primary challenge revolves around proficiently managing an expansive and continuously evolving database of restaurants and food items. Furthermore, the system must cater to a diverse array of user queries, encompassing typos, abbreviations, and varying levels of specificity. Another pivotal challenge involves striking a delicate balance between offering an extensive array of suggestions and ensuring their relevance to the user's preferences.

**Market Benefits:** A robust live search feature holds the potential to substantially elevate user engagement and satisfaction. By minimizing the time and effort needed to discover desired food options, Swiggy can promote more frequent orders and cultivate enhanced customer loyalty. The personalized nature of the suggestions may also lead to the exploration of new restaurants and dishes, enriching the overall user experience and setting Swiggy apart from its competitors.

**Excepted Results:**
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

**Approach**
-  **Design:** Combine tries and inverted indexes to handle both substring and keyword searches.
-  **Implementation:** Use tries for substring matching and auto-suggestions as the user types. Use the inverted index for broader keyword searches.

<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/Trie.cpp">Trie</a>
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/InvertedIndex.cpp">Inverted Index</a>
</div>
 
## 2. Ranked Search Result Swiggy App

**Use Case:** To enhance user satisfaction and drive conversions, Swiggy needs to present search results in an order that aligns with user preferences and expectations. This involves developing a sophisticated ranking algorithm that considers multiple factors, including restaurant popularity, user ratings, proximity to the user, estimated delivery time, and promotional offers. By tailoring the search results to individual users, Swiggy can ensure that the most relevant and appealing options are displayed prominently, increasing the likelihood of an order being placed.

**Challenges:** The critical challenge is creating a ranking algorithm that accurately reflects user preferences and priorities. This requires collecting and analyzing vast amounts of user data, such as past orders, search history, and interactions with the app. The algorithm also needs to adapt to real-time changes, such as restaurant availability or delivery times.

**Market Benefits:** A well-optimized search ranking algorithm can significantly impact Swiggy's bottom line. The platform can increase order frequency, average order value, and customer lifetime value by showcasing the most relevant and enticing options to users. A positive search experience can also enhance user satisfaction and foster long-term loyalty.

**One of the Expected Results:**
- Ranked wise Search Results

![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/e8abdb7c-097e-4814-b75d-7a4fd9cd4bfe)

**Algorithms:**

### 1. Quick Sort:
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
  
<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/QuickSort.cpp">Quick Sort</a>
</div>

## 3. Assignment & Routing Optimization for Swiggy Instamart Delivery

**Use Case:** Swiggy Instamart, the company's grocery delivery service, requires efficient assignment of delivery executives to incoming orders and optimization of their delivery routes. This is essential to ensure timely deliveries, minimize operational costs, and maximize customer satisfaction. Using advanced algorithms and real-time data, Swiggy can intelligently match delivery executives with orders based on proximity, availability, and other relevant factors. Additionally, the platform can dynamically optimize delivery routes for traffic conditions, order volumes, and other variables, ensuring the fastest and most cost-effective delivery possible.

**Challenges:** The dynamic nature of the grocery delivery landscape poses significant challenges. Order volumes can fluctuate rapidly, traffic conditions can change unexpectedly, and delivery executives may have varying availability. To effectively address these challenges, the assignment and routing algorithms are adaptable, scalable, and, most importantly, capable of processing real-time data, ensuring the system's responsiveness and security.

**Market Benefits:** Optimizing assignment and routing can lead to significant cost savings for Swiggy, as it reduces the distance traveled by delivery executives and minimizes fuel consumption. Additionally, faster and more reliable deliveries enhance customer satisfaction and loyalty, strengthening Swiggy's competitive grocery delivery market position.

**Excepted Results**
- Shortest Path

![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/cc7f3a30-8ff4-47f2-bdc0-2456d38c9941)



**Algorithms:**

### 1. Bipartite Matching for Assignment:
- **Purpose:** Assign delivery executives to incoming orders in a way that maximizes the overall efficiency and minimizes delivery times.
- **Application:** Model the assignment problem as a bipartite matching problem, where delivery executives and orders are the two sets of nodes, and the edges represent the feasibility and cost of an assignment.
- **Time Complexity:** O(√(V) * E), where V is the number of nodes (delivery executives and orders) and E is the number of edges (feasible assignments).
- **Space Complexity:** O(V + E), where V is the number of nodes and E is the number of edges.

### 2. Vehicle Routing Problem (VRP) for Routing:
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

<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/VRPandBipartiteforDellivery.cpp">VRP and Bipartite Matching</a>
</div>

## 4. Personalizing Swiggy POP Recommendations

**Use Case:** Swiggy POP, a service offering single-serve, quick-checkout meals, aims to enhance the user experience by providing personalized recommendations. This involves tailoring the menu to individual preferences based on past orders, browsing history, dietary restrictions, and other relevant factors. By presenting users with options they are most likely to enjoy, Swiggy can increase order frequency, average order value, and most importantly, overall user satisfaction. This should make our product development team proud and satisfied with their work.

**Challenges:** The primary challenge is to develop a recommendation engine that accurately captures user preferences and adapts to their evolving tastes. This requires collecting and analyzing vast amounts of user data, employing machine learning techniques to identify patterns, and delivering real-time recommendations that are both relevant and enticing.

**Market Benefits:** A personalized recommendation engine can be a powerful tool for driving user engagement and boosting sales. By showcasing the most appealing options to each user, Swiggy can increase the likelihood of conversions and encourage repeat orders. Additionally, personalized recommendations can foster a sense of individual attention and care, enhancing the overall user experience and building brand loyalty.

**Excepted Results**
- Personalised Restaurants recommendations

![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/bd3f2b36-a659-4caf-8813-b6033b9f0ba3)

**Algorithms:**

### 1. Trie (Prefix Tree) for Eligibility:
- **Purpose:** Efficiently find all food items starting with a given prefix, ideal for handling diverse user queries (typos, abbreviations, etc.).
- **Application:** Build a Trie data structure to store all the food items in Swiggy's POP catalog. When a user starts typing a prefix, traverse the Trie to generate a list of eligible food items.
- **Time Complexity (Search):** O(L), where L is the length of the user's query.
- **Space Complexity:** O(N*L), where N is the number of food items and L is the average length of a food item.

### 2. Inverted Index for Personalization:
- **Purpose:** Quickly retrieve all food items containing a specific keyword, ideal for broader searches and personalization.
- **Application:** Create an inverted index that maps keywords to the food items they appear in. Use this index to rank the eligible food items based on their relevance to the user's preferences and other factors.
- **Time Complexity (Search):** O(k), where k is the number of food items containing the keyword.
- **Space Complexity:** O(N*L), where N is the number of food items and L is the average length of a food item.

<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/Trie.cpp">Trie</a>
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/InvertedIndex.cpp">Inverted Index</a>
</div>

## 5. Finding All Restaurants Near Me Using Geospatial Data Structures

**Use Case:** Swiggy aims to provide a seamless and user-friendly experience in the competitive food delivery market by quickly displaying restaurants near the user's location. This involves utilizing geospatial data structures such as k-d trees to store and query restaurant locations efficiently. By implementing algorithms for range queries, Swiggy can instantly identify all restaurants within a specified radius of the user, enabling faster decision-making and increased convenience.

**Challenges:** A significant technical challenge lies in managing a large and dynamic dataset of restaurant locations. The key to overcoming this challenge is ensuring real-time response times for location-based queries. The algorithms must be optimized for accuracy and speed to deliver a smooth user experience. Additionally, handling edge cases, such as users in areas with limited restaurant options, requires careful consideration to provide relevant and valuable results.

**Market Benefits:** A robust location-based search feature enhances the user experience by providing quick and convenient access to nearby restaurants. This can lead to increased user engagement, higher order frequency, and a more decisive competitive advantage in the market. Additionally, by showcasing local businesses, Swiggy can contribute to the growth of the local economy and foster stronger community ties.

**Excepted Results:**
- Nearby Restaurants

![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/8ec38b18-a54d-4a06-93b8-5d89ac7ce76f)


**Algorithms:**

### 1. Geospatial Data Structures (KD-Trees):

-   **Purpose:** Store and query geospatial data efficiently, such as restaurant locations.
-   **Application:** Use a geospatial data structure like a k-d tree to store the restaurant locations and perform range queries to find all restaurants within a given radius.
-   **Time Complexity:** O(log n) for insertion and O(n) for range queries, where n is the number of restaurants.
-   **Space Complexity:** O(n), where n is the number of restaurants.

### 2. Rectangular range query:

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

<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/KDTree.cpp">KD Trees</a>
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/RectangularRangeQuery.cpp">Rectangular Range Query</a>
</div>

## 6. Finding the Delivery Charges

**Use Case:** Swiggy aims to provide transparent and accurate delivery charges to its users. The optimal route and distance between the user's location and the selected restaurant must be efficiently calculated to achieve this. This is crucial for ensuring fair pricing for customers and delivery partners, building trust, and maintaining a positive user experience.

**Challenges:** The primary challenge is to accurately calculate the distance between two points on a map while considering real-world factors such as traffic conditions, road closures, and one-way streets. This requires access to up-to-date and reliable map data and algorithms that can efficiently process this information.

**Market Benefits**: Accurate and transparent delivery charges are essential for maintaining customer trust and satisfaction. By providing fair pricing, Swiggy can attract and retain customers, leading to increased order volume and revenue. Moreover, fair compensation for delivery partners, based on accurate distance calculations, is a way of showing our appreciation for their hard work and dedication, and it can significantly improve their satisfaction and motivation, contributing to a more reliable and efficient delivery service.

**Excepted Results:**
- Delivery charge based on KM's

 ![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/b4af5a1e-22a4-4404-a5d9-ed630d3656ba)

**Algorithms:**

### 1. Dijkstra's Algorithm:

-   **Purpose:** Find the shortest path between two nodes in a weighted graph.
-   **Application:** Represent the road network as a weighted graph, where nodes represent intersections or points of interest, and edges represent road segments with associated weights.
-   **Time Complexity:** O((E + V) log V), where E is the number of edges and V is the number of vertices in the graph.
-   **Space Complexity:** O(V), where V is the number of vertices in the graph.

**Approach:**

1.  **Construct the Road Network Graph:** Represent the road network as a weighted graph, where nodes represent intersections or points of interest, and edges represent road segments with associated weights.
2.  **Perform Dijkstra's Algorithm:** Use Dijkstra's algorithm to find the shortest path between the user's location and the selected restaurant. The algorithm will explore the graph, keeping track of the shortest distance to each node, and eventually return the shortest path and distance.
3.  **Provide the Fare:** Calculate fare

<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/dijkstra.cpp">Dijkstra</a>
<!--     <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/RectangularRangeQuery.cpp">Rectangular Range Query</a> -->
</div>


## 7. Shortest Path for Multi-Parcel Delivery


**Use Case:** To optimize efficiency and reduce delivery times, Swiggy aims to find the shortest possible routes for delivery personnel responsible for delivering multiple parcels simultaneously. This is a complex logistical challenge, as it requires finding the most efficient route that visits multiple locations while adhering to the capacity constraints of each delivery person. By optimizing these routes, Swiggy can reduce delivery times, increase the number of deliveries per hour, and improve the overall customer experience.

**Challenges:** The Multiple Traveling Salesman Problem (mTSP) is known to be NP-hard, meaning that finding the absolute optimal solution can be computationally expensive for large-scale problems. Additionally, the dynamic nature of traffic conditions and real-time order updates necessitates using algorithms that can adapt to changing circumstances.

**Market Benefits**: Efficient multi-parcel delivery optimization can result in significant cost savings for Swiggy due to reduced fuel consumption and increased delivery efficiency. This can provide a substantial financial advantage for Swiggy. Shorter delivery times and improved reliability can enhance customer satisfaction, leading to increased customer loyalty and positive word-of-mouth. Moreover, optimized routing can help Swiggy manage peak demand periods more effectively, ensuring timely deliveries even during rush hours.

**Algorithm:**

### 1. Multiple Traveling Salesman Problem (mTSP):
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

<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/mTSP.cpp">Multiple Traveling Salesman Problem</a>
<!--     <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/RectangularRangeQuery.cpp">Rectangular Range Query</a> -->
</div>

## 8. Sorting and Filtering Food Items

**Use Case:** Swiggy recognizes the importance of providing users with a seamless and intuitive way to navigate its extensive menu. To achieve this, the platform aims to offer robust sorting and filtering capabilities, allowing users to quickly find food items that meet their specific criteria, such as price range, cuisine type, dietary restrictions, and customer ratings. By enabling users to personalize their search, Swiggy can cater to diverse preferences and ensure that each user finds exactly what they want. This enhances the user experience and increases the likelihood of placing an order.

**Challenges:** The challenge lies in efficiently sorting and filtering a vast and diverse menu in real-time. The algorithms must be optimized for speed and accuracy to ensure that the displayed results are relevant and up-to-date. Additionally, the platform must provide a user-friendly interface, allowing users to apply and modify their sorting and filtering preferences easily.

**Market Benefits**: Implementing effective sorting and filtering features can significantly improve user satisfaction and engagement. By enabling users to quickly find the food items that best match their needs and preferences, Swiggy can encourage more frequent orders and increase the average order value. This potential increase in order frequency and value underscores the financial benefits of the proposed features, which can motivate the marketing team and senior management to support the initiative. Furthermore, a positive user experience can foster customer loyalty and drive repeat business, contributing to Swiggy's long-term success in the competitive food delivery market.

**One of the Expected Results**
- Filter by 4.0+ Ratings

![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/fbf7dcbe-67d7-46f7-80e5-451a1f37d332)


**Algorithm:**

### 1. Merge Sort:
-   **Use:** Efficiently sorts large lists based on various criteria.
-   **Time Complexity:** O(N log N)
-   **Space Complexity:** O(N)

<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/MergeSort.cpp">Merge Sort</a>
<!--     <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/RectangularRangeQuery.cpp">Rectangular Range Query</a> -->
</div>

## 9. Real-Time Order Tracking

**Use Case:** Swiggy recognizes the importance of giving customers real-time visibility into their order status and delivery progress. By implementing real-time order tracking, Swiggy can offer customers a live map view of their order's journey from the restaurant to their doorstep, along with accurate estimated arrival time (ETA) updates. This feature enhances transparency and customer satisfaction by reducing anxiety associated with waiting for deliveries and empowering customers with information to plan their schedules accordingly.

**Challenges:** Accurately tracking the location of delivery executives in real-time while accounting for dynamic traffic conditions and unexpected delays presents a significant challenge. Swiggy must leverage GPS technology and sophisticated algorithms to ensure the tracking information is reliable and up-to-date. Furthermore, communicating ETA updates in a clear and timely manner is crucial to managing customer expectations and providing a positive delivery experience.

**Market Benefits:** Real-time order tracking is a critical differentiator in the competitive food delivery market. It not only enhances the customer experience but also builds trust and loyalty. By providing transparency and control over the delivery process, Swiggy can solidify its position as a customer-centric platform and encourage repeat business.

**One of the Excepted Result:**
- Live Trackable Order

![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/ab183780-d0d4-4b98-b0a4-445f59af0abd)


**Algorithms:**

### 1. A* Search Algorithm:
-   **Purpose:** Find the shortest path in a graph with real-time updates for dynamic conditions like traffic.
-   **Application:** Calculate the optimal route for delivery executives in real-time.
-   **Time Complexity:** O(E), where E is the number of edges.
-   **Space Complexity:** O(V), where V is the number of vertices.

**Approach:**

1.  **Graph Representation:** Model the delivery area as a weighted graph.
2.  **Real-Time Updates:** Continuously update the graph with real-time traffic data.
3.  **Pathfinding:** Use the A* algorithm to find the shortest path for delivery executives.

<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/A_star.cpp">A* Search Algorithum</a>
<!--     <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/RectangularRangeQuery.cpp">Rectangular Range Query</a> -->
</div>

## 10. Customer Segmentation


**Use Case:** To deliver personalized experiences and targeted marketing campaigns, Swiggy aims to segment its vast customer base into distinct groups based on their ordering behavior, preferences, and demographics. This involves analyzing various data points, such as order history, cuisine preferences, average order value, and location. By understanding the unique characteristics of each customer segment, Swiggy can tailor its offerings and promotions to specific groups, resulting in higher engagement, increased conversions, and improved customer lifetime value.

**Challenges:** Customer data's sheer volume and diversity pose a significant challenge for effective segmentation. Identifying the most relevant attributes for segmentation and choosing the appropriate clustering algorithms requires careful consideration. Additionally, the segmentation model must be dynamic and adaptable to evolving customer behavior to ensure its relevance and accuracy.

**Market Benefits:** Effective customer segmentation allows Swiggy to move away from a one-size-fits-all approach and deliver personalized experiences that resonate with each customer segment. This can lead to higher customer satisfaction, increased loyalty, and improved marketing ROI. By tailoring recommendations, offers, and communications to specific groups, Swiggy can drive engagement, boost sales, and gain a competitive edge in the market.

**One of the Excepted Results**
- Personalised Ads based on segementation

![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/f701d2cd-35cc-4a6f-9c01-53410b82d7bc)


**Algorithms:**

### 1. K-Means Clustering:
-   **Purpose:** Group customers into clusters based on their features.
-   **Application:** Segment customers for personalized marketing.
-   **Time Complexity:** O(n * k * t), where n is the number of data points, k is the number of clusters, and t is the number of iterations.
-   **Space Complexity:** O(n * k).

**Approach:**
1.  **Feature Extraction:** Collect data on customer behavior, preferences, and demographics.
2.  **Clustering:** Use K-Means to segment customers into clusters.

<div class="codes">Codes
    <a href="https://github.com/aditya1601/kmeans-clustering-cpp/blob/master/kmeans.cpp">K-means Clustering</a>
<!--     <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/RectangularRangeQuery.cpp">Rectangular Range Query</a> -->
</div>

##  11. Data Compression in Swiggy's Infrastructure using Huffman Coding

**Use Case:** Swiggy handles massive amounts of data, including order details, customer information, restaurant menus, and user interactions, as a leading food delivery platform. This data must be stored efficiently and transmitted quickly to ensure a seamless user experience. Huffman coding, a lossless data compression algorithm, can be employed to reduce the size of this data without compromising its integrity. By encoding frequently occurring data with shorter codes and less frequent data with more extended codes, Swiggy can significantly reduce storage requirements and bandwidth usage, leading to faster data transfer speeds and improved overall performance.

**Challenges:** Implementing Huffman coding requires careful data analysis to identify the most frequent patterns and determine the optimal code lengths for each symbol. The compression and decompression processes must be efficient to avoid introducing latency. Additionally, ensuring compatibility with existing infrastructure and data formats can be complex.

**Market Benefits:** Efficient data compression can result in significant cost savings for Swiggy. The company can optimize its infrastructure and lower operational expenses by reducing storage requirements. Faster data transmission speeds can improve the user experience by reducing page load times and enabling real-time updates. Moreover, minimizing bandwidth usage can help Swiggy manage its network resources more effectively and avoid congestion during peak hours.

**Algorithms, Design Techniques, Performance Analysis:**

### 1. Huffman Coding: Greedy approach, Variable-length encoding
-   **Time Complexity:** O(n log n) for building the Huffman tree, where n is the number of symbols
-   **Space Complexity:** O(n) for storing the Huffman tree and encoded data

<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/huffmann.cpp">Huffman Coding</a>
<!--     <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/RectangularRangeQuery.cpp">Rectangular Range Query</a> -->
</div>


## 12.  Real-Time Order Tracking for swiggy admin and Statistics using Fenwick Trees

**Use Case:** Swiggy's commitment to operational efficiency and data-driven decision-making requires a robust system for real-time tracking and analyzing order statistics. Fenwick trees, also known as Binary Indexed Trees, provide an elegant solution for managing cumulative frequencies of events, such as the number of deliveries completed within specific timeframes, average delivery times across different zones, or peak order periods. By leveraging Fenwick trees, Swiggy can efficiently update and query these statistics on the fly, enabling real-time monitoring of key performance indicators and facilitating swift responses to operational bottlenecks or surges in demand.

**Challenges:** The primary challenge is to design a Fenwick tree implementation that can handle the high volume of real-time updates generated by Swiggy's massive order flow. The data structure needs to be optimized for speed and memory efficiency to ensure minimal impact on system performance. Maintaining data consistency and accuracy is crucial for generating reliable insights and making informed decisions.

**Market Benefits:** Real-time order tracking and statistics empower Swiggy to proactively identify and address operational issues, optimize delivery routes, and allocate resources more effectively. This can improve delivery times, reduce costs, and enhance customer satisfaction. Furthermore, analyzing historical data trends can help Swiggy make strategic decisions regarding inventory management, staffing, and marketing initiatives, ultimately driving business growth and profitability.

**Algorithms**

### 1. Fenwick Tree (Binary Indexed Tree) 
-    Data structure for cumulative frequency tables.
-  **Time Complexity:** O(log n) for both updates and prefix sum queries.
-   **Space Complexity:** O(n) for storing the tree.

<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/FenwickTree.cpp">Fenwick Tree</a>
<!--     <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/RectangularRangeQuery.cpp">Rectangular Range Query</a> -->
</div>


## 13. Order Dispatch Optimization using Max-Heap (Priority Queue)


**Use Case:** Efficient order dispatch is critical for Swiggy's success in the fast-paced food delivery industry. By utilizing a max-heap (priority queue) data structure, Swiggy can intelligently prioritize incoming orders based on various factors, such as urgency, estimated delivery time, customer location, and delivery executive availability. This ensures that orders are assigned to the most suitable delivery partners in real-time, leading to faster deliveries, improved customer satisfaction, and optimal utilization of resources.

**Challenges:** The dynamic nature of order flow and delivery conditions requires a priority queue implementation that can adapt to changing priorities and real-time updates. The algorithm must balance the need for quick order assignment to minimize delivery times and maximize overall efficiency. Additionally, integrating the priority queue with the broader dispatch system and ensuring seamless communication with delivery executives pose technical challenges.

**Market Benefits:** Optimized order dispatch can significantly improve Swiggy's operational efficiency, reduce delivery times, and enhance customer satisfaction. Swiggy can build a reputation for reliability and customer loyalty by ensuring that orders are delivered promptly and efficiently. Furthermore, efficient resource utilization can lead to cost savings and increased profitability for the company.

**Algorithms:**

### 1. Max-Heap (Priority Queue):

-   **Purpose:** Maintain a collection of elements where the root element is the largest (or highest priority) among all the elements.
-   **Application:** Store the incoming orders in a max-heap, where the priority of each order is determined by a combination of factors, such as delivery time, customer priority, and order value.
-   **Time Complexity:** O(log n) for insertion, deletion, and retrieval of the maximum (highest priority) element, where n is the number of elements in the heap.
-   **Space Complexity:** O(n), where n is the number of elements in the heap.

<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/Maxheap.cpp">Max heap</a>
<!--     <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/RectangularRangeQuery.cpp">Rectangular Range Query</a> -->
</div>


## 14. Restaurant Rating and Sorting using Red-Black Trees


**Use Case:** Swiggy understands that users rely heavily on restaurant ratings to decide where to order from. Swiggy needs to maintain a dynamic and efficient system for storing, updating, and sorting restaurants based on their ratings to cater to this. Red-black trees, a self-balancing binary search tree, are ideal. By storing restaurant ratings in a red-black tree, Swiggy can efficiently insert new ratings, update existing ones, and retrieve a sorted list of restaurants based on their ratings in real-time. This enables features like filtering restaurants by rating, showcasing top-rated establishments, and providing personalized recommendations based on user preferences.

**Challenges:** The main challenge lies in maintaining the balance of the red-black tree, as ratings are constantly updated. The algorithms must ensure the tree remains balanced after each insertion or deletion operation to guarantee optimal search and retrieval performance. Additionally, the system must be scalable to accommodate many restaurants and ratings while maintaining efficient performance.

**Market Benefits** A robust restaurant rating and sorting system can significantly enhance Swiggy's user experience. By providing users with an easy way to discover highly-rated restaurants and filter options based on their preferences, Swiggy can increase user engagement and drive more orders. Additionally, showcasing top-rated establishments can benefit restaurants by increasing their visibility and attracting more customers.

**One of the Expected Results**
- Sorted Restaurants in the local area

![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/6c373108-1421-45ab-8552-9f2ff5f5ee56)

**Algorithms:**

### 1. Red-Black Trees:

-   **Purpose:** Maintain a sorted collection of elements while providing efficient insertion, deletion, and search operations.
-   **Application:** Store the restaurants in a red-black tree, where each node represents a restaurant and the key is the restaurant's rating.
-   **Time Complexity:** O(log n) for insertion, deletion, and search operations, where n is the number of elements in the tree.
-   **Space Complexity:** O(n), where n is the number of elements in the tree.

**Approach:**

1.  **Restaurant Storage:** Store each restaurant in a red-black tree, using the restaurant's rating as the key.
2.  **Rating Updates:** When a restaurant's rating changes, update the corresponding node in the red-black tree.
3.  **Sorted Restaurant List:** Traverse the red-black tree in-order to obtain a sorted list of restaurants based on their ratings.
4.  **Filtering and Searching:** Use the red-black tree's search functionality to efficiently filter and search for restaurants based on their ratings.

<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/RedBlackTree.cpp">Red Black Tree</a>
<!--     <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/RectangularRangeQuery.cpp">Rectangular Range Query</a> -->
</div>

## 15. Delivery Time Estimates using Segment Trees for Range Queries

**Use Case:** Providing accurate and dynamic delivery time estimates is crucial for enhancing the customer experience on Swiggy. Customers want to know when they can expect their food to arrive, and accurate estimates can help them plan their meals and schedules accordingly. Segment trees, a versatile data structure for range queries, can efficiently calculate and update delivery time estimates based on various factors such as restaurant preparation time, distance to the customer, traffic conditions, and delivery executive availability. By leveraging segment trees, Swiggy can provide real-time and reliable ETA updates, improving customer satisfaction and reducing anxiety associated with waiting for deliveries.

**Challenges:** The primary challenge is aggregating and processing real-time data from multiple sources to generate accurate estimates of delivery time. This involves collecting information on restaurant preparation times, delivery executive locations and availability, and traffic conditions in the delivery area. The algorithms must be robust enough to handle unexpected delays, such as traffic congestion or order cancellations, and update the estimates accordingly.

**Market Benefits:** Accurate and reliable delivery time estimates are crucial to customer satisfaction and loyalty. By providing this information, Swiggy can set clear expectations and reduce uncertainty, leading to a more positive delivery experience. Furthermore, dynamic ETA updates can help customers plan their meals and schedules more effectively, enhancing the user experience.

**One of the Expected Results**
- Real time ETA

![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/68494457-d3b9-4253-bb61-269fcb3b8a45)


**Algorithms:**

### 1. Segment Trees:

-   **Purpose:** Efficiently perform range queries and updates on an array or a collection of elements.
-   **Application:** Maintain a segment tree data structure that stores delivery time estimates for different time intervals (e.g., 15-minute slots) across multiple restaurants and delivery zones.
-   **Time Complexity:** O(log n) for range queries and updates, where n is the number of elements in the segment tree.
-   **Space Complexity:** O(n), where n is the number of elements in the segment tree.

**Approach:**

1.  **Segment Tree Construction:** Build a segment tree that stores delivery time estimates for different time intervals across multiple restaurants and delivery zones.
2.  **Real-Time Updates:** Whenever there are changes in order volume, restaurant processing times, or delivery executive availability, update the corresponding delivery time estimates in the segment tree.
3.  **Range Queries:** When a customer requests a delivery time estimate, perform a range query on the segment tree to retrieve the estimated delivery time for the selected restaurant and delivery zone.
4.  **Continuous Monitoring:** Continuously monitor and update the delivery time estimates in the segment tree based on real-time data to ensure accurate and up-to-date information.

<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/SegmentTree.cpp">Segment Trees</a>
<!--     <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/RectangularRangeQuery.cpp">Rectangular Range Query</a> -->
</div>

## 16. Priority Queue for Call Wait Time Management and Swiggy One Membership

**Use Case:** Swiggy aims to prioritize customer calls based on urgency and membership status to provide exceptional customer support. Swiggy One members who pay a premium subscription fee should be prioritized in the call queue to ensure they receive prompt assistance. Swiggy can efficiently manage incoming calls, prioritize urgent inquiries, and provide preferential treatment to its valued Swiggy One member by utilizing a priority queue data structure.

**Challenges:** The main challenge is to define a fair and effective priority system that balances the needs of all customers while prioritizing urgent issues and Swiggy One members. The algorithm needs to be flexible enough to adapt to varying call volumes and different types of inquiries. Additionally, the system must be integrated with the broader customer support infrastructure to ensure a seamless experience for customers and support agents.

**Market Benefits:** Efficient call wait time management can significantly improve customer satisfaction with Swiggy's customer support services. By prioritizing urgent issues and providing preferential treatment to Swiggy One members, the company can demonstrate its commitment to customer care and build stronger relationships with its loyal customers. This can increase customer retention, positive word-of-mouth, and a more substantial brand reputation.

**Algorithms:**

### 1. Priority Queue:

-   **Purpose:** Maintain a collection of elements where the root element is the highest priority among all the elements.
-   **Application:** Store the incoming customer calls in a priority queue, where the priority of each call is determined by factors such as call wait time, customer priority, and Swiggy One membership status.
-   **Time Complexity:** O(log n) for insertion, deletion, and retrieval of the maximum (highest priority) element, where n is the number of elements in the queue.
-   **Space Complexity:** O(n), where n is the number of elements in the queue.

<div class="codes">Codes
    <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/PriortyQueue.cpp">Priorty Queue</a>
<!--     <a href="https://github.com/Kingsman44/aps-portfolio.github.io/blob/main/codes/RectangularRangeQuery.cpp">Rectangular Range Query</a> -->
</div>

## 17. Enhancing Food Recommendations using Graph Methods

**Use Case:** Swiggy aims to revolutionize its food recommendation system by employing graph methods to analyze the complex relationships between food items, cuisines, and user preferences. This approach goes beyond traditional collaborative filtering by uncovering hidden connections and patterns that can lead to more accurate and personalized recommendations. By understanding how different food items are related and how users interact with them, Swiggy can tailor its suggestions to individual tastes, leading to higher user engagement and satisfaction.

**Challenges:** Building a comprehensive and accurate food graph that captures the nuances of culinary relationships is a complex task. Choosing suitable graph algorithms and embedding techniques to extract meaningful insights from the graph is crucial. Additionally, balancing exploring new food options with the recommendation of familiar favorites is essential to keep users engaged and satisfied.

**Market Benefits:** Swiggy can significantly increase user engagement and the likelihood of repeat orders by providing highly personalized food recommendations. This can translate to higher revenue and a more decisive competitive edge in the food delivery market. Moreover, a superior recommendation system can enhance the overall user experience, making Swiggy the go-to platform for discovering new and exciting food options.

**Algorithms:**

### 1. Graph Embedding (Node2Vec) \[1\]:
- **Purpose:** Learn low-dimensional vector representations of nodes (food items) in a graph, capturing the structural and semantic relationships between them.
- **Application:** Construct a graph representing the relationships between food items (e.g., co-occurrence, substitutes, complements) and use Node2Vec to learn embeddings for each item.
- **Time Complexity:** O(d * V * E), where d is the dimensionality of the embeddings, V is the number of nodes, and E is the number of edges.
- **Space Complexity:** O(V + E), where V is the number of nodes and E is the number of edges.

### 2. Random Walk-based Recommendation \[2\]:
- **Purpose:** Leverage the learned graph embeddings to generate personalized food recommendations for users.
- **Application:** Perform random walks starting from the user's preferred food items to explore the graph and identify relevant recommendations.
- **Time Complexity:** O(k * V), where k is the number of random walks and V is the number of nodes.
- **Space Complexity:** O(V + E), where V is the number of nodes and E is the number of edges.

**Approach:**
1. Construct a food item graph based on various relationships (e.g., co-occurrence, substitutes, complements).
2. Use Node2Vec \[1\] to learn low-dimensional embeddings for each food item, capturing their structural and semantic relationships.
3. Perform random walks starting from the user's preferred food items to explore the graph and identify relevant recommendations.
4. Combine the recommendations from the random walk-based \[2\] approach with other recommendation techniques (e.g., collaborative filtering, content-based filtering) to provide a comprehensive and personalized food recommendation experience.

By leveraging graph-based methods, Swiggy can enhance its food recommendations by capturing the complex relationships between food items and providing more relevant and personalized suggestions to users.

**Citations:**
-    \[1\]  [Aditya Grover and Jure Leskovec, "node2vec: Scalable Feature Learning for Networks,"](https://arxiv.org/abs/1607.00653)
-    \[2\]  [Cooper, C., Lee, S. H., Radzik, T., & Siantos, Y. (2010, January). Random walks in recommender systems: Exact computation and simulations. Department Of Informatics, King's College, London, U.K](https://nms.kcl.ac.uk/colin.cooper/papers/recommender-rw.pdf)

## 18. Identifying Fraud Rings Using Domain-Aware Weighted Community Detection

**Use Case:** Swiggy, like any online platform, faces the constant threat of fraudulent activities that can undermine its integrity and harm its users. These activities range from fake accounts and reviews to coordinated attacks and collusion schemes. By employing domain-aware weighted community detection algorithms, Swiggy can proactively identify suspicious behavior patterns and connections between users, allowing for early intervention and mitigating potential fraud. This approach is essential to maintain the platform's trustworthiness and protect users and the company from financial losses and reputational damage.

**Challenges:** Detecting fraud is an ongoing arms race, as fraudsters continuously adapt their techniques to evade detection. Therefore, the community detection algorithms must be constantly updated and refined. Additionally, striking the right balance between sensitivity (identifying accurate fraudsters) and specificity (avoiding false positives) is crucial to minimize disruptions to legitimate users.

**Market Benefits:** By effectively identifying and neutralizing fraud rings, Swiggy can significantly improve the security and reliability of its platform. This can lead to increased user trust, higher engagement, and more significant revenue. Additionally, a proactive approach to fraud detection can reduce financial losses due to fraudulent activities and protect the company's reputation in the market.

**Algorithms:**

### 1. Domain-Aware Weighted Community Detection \[1\]:
- **Purpose:** Identify groups of connected entities (e.g., users, devices, accounts) that exhibit fraudulent behavior.
- **Application:** Construct a weighted graph representing the relationships between entities (e.g., based on shared attributes, co-occurrences, or interactions) and apply community detection algorithms to identify densely connected subgroups that may represent fraud rings.
- **Time Complexity:** O(V + E), where V is the number of nodes and E is the number of edges in the graph.
- **Space Complexity:** O(V + E), where V is the number of nodes and E is the number of edges in the graph.

**Approach:**
1. Collect and preprocess data from various sources (e.g., user accounts, device information, transaction logs) to construct a weighted graph representing the relationships between entities.
2. Incorporate domain-specific knowledge and features (e.g., user profiles, device characteristics, transaction patterns) to weight the edges in the graph, reflecting the likelihood of fraudulent connections.
3. Apply community detection algorithm Label Propagation, to identify densely connected subgroups in the graph that may represent fraud rings.
4. Analyze the detected communities and their characteristics to prioritize investigations and take appropriate actions to mitigate the identified fraudulent activities.

**Citations:**
- \[1\] Masihullah, S. (2022, August 5). Identifying Fraud Rings Using Domain Aware Weighted Community Detection. _Medium_. https://bytes.swiggy.com/identifying-fraud-rings-using-domain-aware-weighted-community-detection-6a14c27c43e0

![image](https://github.com/Kingsman44/aps-portfolio.github.io/assets/58323485/1aa055c6-78de-4672-856b-b4fb14def1bf)

# 4. Learnings and Key Take away

Through the development of this Swiggy portfolio, several valuable insights and lessons have emerged regarding the application of algorithmic problem solving in the real world.

1.  **The Power of Data Structures:** Data structures like Tries, Inverted Indexes, and Segment Trees are fundamental tools for efficient data organization and retrieval. Their application in scenarios like search suggestions, personalization, and real-time updates highlights their versatility and importance in modern software systems.
    
2.  **Algorithm Selection Matters:** Choosing the right algorithm for a specific problem is crucial. For instance, while Dijkstra's algorithm is effective for finding the shortest path for delivery charges, the Multiple Traveling Salesman Problem requires heuristic approaches due to its complexity. Understanding the trade-offs between optimality and computational feasibility is essential.
    
3.  **Real-Time Challenges:** Real-world applications often involve dynamic data and real-time constraints. Algorithms like A* search and Fenwick trees showcase how data structures and algorithms can be adapted to handle real-time updates and deliver timely results in applications like order tracking and delivery time estimations.
    
4.  **Beyond Technical Skills:** Algorithmic problem-solving is not just about technical proficiency. It requires a deep understanding of the problem domain, the ability to model real-world scenarios as computational problems, and the creativity to design innovative solutions.
    
5.  **Continuous Learning:** The field of algorithms is constantly evolving. Staying updated with the latest research and techniques is crucial for developing cutting-edge solutions. This portfolio project has reinforced the importance of continuous learning and exploration in this dynamic field.
