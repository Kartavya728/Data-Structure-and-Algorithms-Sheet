# 🚀 Graph Algorithms & Problem Solving Guide

**Total Questions:** 54

## Topic Overview
Graph traversal (BFS/DFS), cycles, shortest paths, MST, topological sorting.


This guide breaks down graph data structures and algorithms from basic traversals to advanced spanning trees. It is designed to act as a mental map: focusing on **how to recognize a problem** and **which technique to apply**.

---

## 1. Graph Basics & Representation

Before solving complex problems, you must know how to navigate the graph. 

*   **Adjacency List:** The most common representation. An array of lists where `adj[i]` contains all neighbors of node `i`. Excellent for saving space ($O(V+E)$).
*   **Adjacency Matrix:** A 2D array. Good for dense graphs or when you need $O(1)$ edge lookups, but uses $O(V^2)$ space.

### The Two Core Traversals
1.  **BFS (Breadth-First Search):** 
    *   *Analogy:* Throwing a stone in a pond and watching the ripples expand level by level.
    *   *Implementation:* Uses a **Queue**.
    *   *Best for:* Finding the shortest path in unweighted graphs (or unit weight).
2.  **DFS (Depth-First Search):** 
    *   *Analogy:* Exploring a maze by going as deep as possible down one path before hitting a dead end and backtracking.
    *   *Implementation:* Uses **Recursion** (or a Stack).
    *   *Best for:* Exploring all paths, finding cycles, and backtracking.

---

## 2. Traversal Problem Patterns

Most standard graph problems are just clever modifications of BFS or DFS.

### Pattern A: "Number of Connected Components" (Provinces, Islands)
*   **Technique:** Loop through all nodes. Every time you find an unvisited node, trigger a BFS/DFS to mark its entire component as visited, and increment your counter. 

### Pattern B: "Multi-Source BFS" (Rotten Oranges, 01 Matrix)
*   **Technique:** Instead of pushing one starting node into the queue, push **all** starting targets (all rotten oranges, all `0`s) into the queue at time $t=0$. Then process level by level. 
*   *Why?* It simulates simultaneous expansion from multiple sources.

### Pattern C: "Boundary DFS" (Surrounded Regions, Enclaves)
*   **Technique:** Start your DFS/BFS **only from the edges/borders** of the grid. Mark anything connected to the boundary as "safe". Everything left over in the middle is isolated/surrounded.

### Pattern D: Cycle Detection
*   **Undirected Graphs:** Use DFS/BFS. Keep track of the `parent` node. If you visit a node that is already visited, and it is **not** the parent you just came from, you found a cycle.
*   **Directed Graphs:** Keep track of nodes in the *current recursion path*. If you hit a node that is visited AND currently in your recursion stack, you found a cycle.

### Pattern E: Bipartite Check
*   **Technique:** Graph coloring. Try to color the graph using only 2 colors (e.g., 1 and -1) so no adjacent nodes have the same color. If you are forced to color a neighbor with the same color as the current node, it's not bipartite.

---

## 3. Topological Sorting (DAGs Only)

Topological sort is a linear ordering of vertices where for every directed edge $U \rightarrow V$, vertex $U$ comes before $V$. **It only works on Directed Acyclic Graphs (DAGs).**

### Kahn's Algorithm (BFS Approach)
1.  Calculate the **in-degree** (incoming edges) for all nodes.
2.  Push all nodes with an in-degree of `0` into a Queue.
3.  Pop a node, add it to your result, and decrease the in-degree of all its neighbors by 1.
4.  If a neighbor's in-degree hits `0`, push it to the Queue.
*   *Cycle Check:* If your final sorted list doesn't contain all vertices, the graph has a cycle.

**When to use Topo Sort:** Course scheduling (prerequisites), compiling dependencies, Alien Dictionary ordering.

---

## 4. Shortest Path Algorithms

Finding the fastest way from A to B depends entirely on the graph's weights.

| Graph Type | Algorithm | Time Complexity | Core Logic |
| :--- | :--- | :--- | :--- |
| Unweighted | **BFS** | $O(V + E)$ | First time you reach a node is guaranteed to be the shortest path. |
| DAG | **Topo Sort + DP** | $O(V + E)$ | Process nodes in Topo order. Relax outgoing edges. |
| Pos Weights | **Dijkstra's** | $O(E \log V)$ | Use a Min-Heap. Always process the closest tentative node next. |
| Neg Weights | **Bellman-Ford** | $O(V \times E)$ | Relax all edges exactly $V-1$ times. Relax one more time to detect negative cycles. |
| All-Pairs | **Floyd-Warshall**| $O(V^3)$ | Try going through every possible intermediate node $K$ to get from $I$ to $J$. |

---

## 5. Minimum Spanning Tree (MST) & Disjoint Sets

An MST connects all vertices in a graph without any cycles and with the minimum possible total edge weight.

### Disjoint Set Union (DSU)
A magical data structure for dynamic connectivity. It does two things in near $O(1)$ time:
1.  `Find()`: Which group does this node belong to?
2.  `Union()`: Merge two groups together.
*   *When to use:* Finding extra edges, merging accounts, checking if components are connected without traversing the graph.

### Kruskal's Algorithm (Uses DSU)
1.  Sort all edges from lowest weight to highest.
2.  Iterate through the edges. Use DSU to check if the two nodes are already connected.
3.  If they aren't, add the edge to your MST and `Union()` them. 

### Prim's Algorithm (Uses Priority Queue)
1.  Start at any node. Add its edges to a Min-Heap.
2.  Pop the smallest edge. If it leads to an unvisited node, add it to the MST and push its neighbors to the heap.
3.  Repeat until all nodes are connected.

---

## 6. Advanced Structural Algorithms

### Bridges in a Graph (Tarjan's Algorithm)
A bridge is an edge that, if removed, splits the graph into multiple disconnected components (Critical Connections).
*   **Technique:** Track two things during DFS: `time_of_insertion (tin)` and `lowest_reachable_time (low)`.
*   If `low[neighbor] > tin[current_node]`, the only way to reach the neighbor was through this exact edge. It's a bridge.

### Strongly Connected Components (Kosaraju's Algorithm)
In a directed graph, an SCC is a portion where every node can reach every other node.
*   **Technique:** 
    1. Do DFS and push nodes to a stack based on their finish time.
    2. Reverse all edges in the graph.
    3. Pop from the stack and do a normal DFS to map out each independent SCC.

---

## 🧠 Quick "Cheat Sheet" for Interviews

*   *Is it a grid with interconnected zones?* -> **DFS / BFS**
*   *Are multiple things spreading simultaneously?* -> **Multi-source BFS**
*   *Is it about prerequisites, scheduling, or ordering?* -> **Topological Sort**
*   *Shortest path, no negative weights?* -> **Dijkstra**
*   *Need to detect negative weight cycles?* -> **Bellman-Ford**
*   *Grouping things together dynamically (e.g., merging accounts)?* -> **Disjoint Set (Union-Find)**