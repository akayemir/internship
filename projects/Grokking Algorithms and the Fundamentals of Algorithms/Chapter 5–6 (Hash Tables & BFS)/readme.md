# BFS Algorithm

This project creates a random maze and uses BFS algorithm to check weather the person can escape from the maze or not.

## 📌 Description

The goal of this code is to practise BFS algorithm and check all possible scenarios to find a path to get out of the maze.


---

## ⚙️ Functions Used

| Function Name             | Description                                                                                                           |
|---------------------------|-----------------------------------------------------------------------------------------------------------------------|
| `void bfs()`              | Pushes available spots to the queue and calls itself recursively until there are no available spots left in the queue |
| `int main()`              | Gets an input **n** for the **n*n** array. Randomly generates it and shows the initial and final states of the array  |


---

## 🖨️ Example Output

A group of friends are in a maze and they want to find the exit.
Enter the edge of the maze: **5**
. = path, x = wall, o = visited
The maze is: 
..x..
xxx.x
x.xxx
.x..x
xx...
The maze after BFS is: 
oox..
xxx.x
x.xxx
.x..x
xx...
The friends did not find the exit.
 

---

## 📊 Conclusion

This project demonstrates how the Breadth-First Search (BFS) algorithm can be used to navigate through a maze by exploring all possible paths level by level. BFS ensures that the path is found, if one exists, making it a reliable strategy for pathfinding problems. Through randomized maze generation and visualization of visited paths, this implementation highlights BFS’s effectiveness in systematically checking every reachable area until the goal is found or all options are exhausted.

---

# Hash Table Algorithm

This project takes input and updates the phonebook using hashing algorithm with linear probing until user exits.

---

## 📌 Description

The goal of this code is to practise hash table algorithm and find a solution for collisions during hashing.

---

## ⚙️ Functions Used

| Function Name             | Description                                                                                                                                      |
|---------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------|
| `void hashFunction()`     | Applies the hashing according to ASCII table values of chars of the string                                                                       |
| `int main()`              | Gets the inputs and calls hashFunction() to fill the phonebook. If that spot is already taken, uses a for loop to find the nearest empty spot.   |


---

## 🖨️ Example Output

Welcome to Phonebook!
Menu: 
1. Add a number
2. Search a number
3. Exit
Enter your choice: **1**
The name of the person: **Emir**
The number: **5330000101**
Menu: 
1. Add a number
2. Search a number
3. Exit
Enter your choice: **1**
The name of the person: **Mert**
The number: **5112223344**
Menu: 
1. Add a number
2. Search a number
3. Exit
Enter your choice: **2**
The name of the person: **Emir**
The number of Emir is: 5330000101.
Menu: 
1. Add a number
2. Search a number
3. Exit
Enter your choice: **2**
The name of the person: **Kerem**
The person is not found.
Menu: 
1. Add a number
2. Search a number
3. Exit
Enter your choice: **3**
Goodbye!
The phonebook is: 
Emir: 5330000101
Mert: 5112223344

---

## 📊 Conclusion

A hash table allows for much faster and easier access to values compared to a regular array by using keys instead of indices. However, when two different inputs produce the same hash value (a collision), managing them becomes challenging, especially when insertion and deletion operations are performed simultaneously.


---

## 🖥️ System Information and Technologies Used

- **RAM:** 16 GB Unified Memory  
- **Processor:** Apple M2  
  - 8-core CPU (4 performance + 4 efficiency cores)  
  - 10-core GPU  
  - ARM-based architecture (ARM64)  
- **Operating System:** macOS
- **Programming Language:** C++ (C++23 standard)
- **Chrono Library:** Used for precise time measurement

