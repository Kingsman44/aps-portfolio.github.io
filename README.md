
# Food Delivery (Swiggy)

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
<dd>Google</dd>
</dl>

* * *

> A step towards better food delivery management
>
> Kingsman44

#### Note:
This page hosts:

1. Introduction
2. Objectives
3. Business Use Cases and Mapping Algorithms
4. Use case and efficiency overview
5. Learnings and key takeaways

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
    
