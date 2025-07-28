# Dijkstra’s Algorithm

This C++ program takes a graph as input and calculates the shortest path from node `0` to node `n-1` using **Dijkstra’s algorithm**.

---

## 📌 Description

The user is asked to input the number of nodes and edges in the graph. Each edge is defined by two nodes and a weight. The algorithm calculates the shortest path from the source node (`0`) to the destination node (`n-1`) using a greedy approach by updating the minimum distances.

---

## ⚙️ How It Works

- The graph is represented using a dynamically allocated 2D array (adjacency matrix).
- All distances are initialized to infinity.
- The algorithm iteratively picks the unvisited node with the smallest known distance and updates its neighbors.
- The loop continues until all nodes are visited.

---

## 🖨️ Example Output

```
Enter the number of nodes: 4  
Enter the number of edges: 5  
Enter the edges: (Format: node1, node2, weight)  
0 1 6  
0 2 2  
2 1 3  
1 3 1  
2 3 5  

The shortest path from 0 to 3 is 6
```

---

## 📊 Conclusion

Dijkstra's algorithm efficiently computes the shortest path in a weighted graph using a greedy strategy. It works best for graphs with non-negative weights. This implementation uses an adjacency matrix and basic loops, making it a clear example of Dijkstra’s core principles without relying on advanced data structures like priority queues.

---

# Greedy Coin Algorithm

This C++ program calculates the **minimum number of coins** needed to make a given amount using a **greedy approach**.

---

## 📌 Description

The user inputs a money amount, and the program outputs how many units of each denomination (from 200 TL to 0.01 TL) are required to represent that amount with the least number of coins.

---

## ⚙️ How It Works

- An array of Turkish currency denominations is defined.
- Starting from the largest value, the algorithm subtracts as many as possible until the remainder is less than the current denomination.
- This process continues with the next smaller denomination.

---

## 🖨️ Example Output

```
Enter the amount of money: 256.41  

200 TL : 1 tane  
100 TL : 0 tane  
50 TL : 1 tane  
20 TL : 0 tane  
10 TL : 0 tane  
5 TL : 1 tane  
1 TL : 1 tane  
0.5 TL : 0 tane  
0.25 TL : 1 tane  
0.1 TL : 1 tane  
0.05 TL : 1 tane  
0.01 TL : 1 tane  
```

---

## 📊 Conclusion

This coin calculation program demonstrates the greedy algorithm in its simplest and most effective form. However, it's important to note that greedy algorithms don't always guarantee the optimal solution, especially when units don't follow a consistent structure. But in this case, by always selecting the largest possible denomination first, it ensures the total number of coins and bills is minimized. 

---

## 🖥️ System Information and Technologies Used

- **RAM:** 16 GB Unified Memory  
- **Processor:** Apple M2  
  - 8-core CPU (4 performance + 4 efficiency cores)  
  - 10-core GPU  
  - ARM-based architecture (ARM64)  
- **Operating System:** macOS  
- **Programming Language:** C++ (C++23 standard)  
- **Standard Libraries Used:** `iostream`

