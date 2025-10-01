#include<iostream>

using namespace std;

int main(){

    
}

/*
Time Complexity and Big O Notation
Time Complexity is a measure of the amount of time 
taken by an algorithm to run as a function of the length of the input. 
Since the actual time depends on the hardware, programming language, etc.,
 we instead count the number of elementary operations (like comparisons, assignments, or arithmetic operations).

Big O Notation is the mathematical notation used to describe the upper bound (the worst-case scenario) 
of an algorithm's running time. It focuses only on the dominant term and ignores constants, 
as we're interested in the rate of growth.
*/

/*

The Trade-off
The choice between an Array and a Linked List depends 
entirely on which operations your application performs most frequently:

Choose an Array if you need fast, random access 
to elements (e.g., frequently reading the 1st, 5th, or 100th element).

Choose a Linked List if you need frequent additions or removals 
of elements in the middle of the collection (e.g., implementing a queue or a stack).

*/

/*
You've covered the basics of Data Structures and Complexity! The logical next step in DSA is to understand how we explore and search these structures, which brings us to Graph and Tree Traversal Algorithms. 🌳

The two most fundamental traversal algorithms are Depth-First Search (DFS) and Breadth-First Search (BFS).

1. Depth-First Search (DFS) ⬇️
Depth-First Search is an algorithm for traversing or searching tree or graph data structures. The algorithm starts at the root (or any arbitrary node) and explores as far as possible along each branch before backtracking.

Core Idea: Go deep first.

Mechanism: It uses a Stack (or recursion, which uses the system's call stack) to keep track of the nodes to visit.

Analogy (The Maze Solver): Imagine you're in a maze. You pick a path and follow it until you hit a dead end. Only then do you backtrack to the last junction and try the next path.

Common Applications:

Finding a path between two nodes.

Detecting cycles in a graph.

Topological Sorting (for scheduling dependencies).

2. Breadth-First Search (BFS) ➡️
Breadth-First Search is an algorithm for traversing or searching tree or graph data structures. It starts at the root (or any arbitrary node) and explores all of the neighbor nodes at the present depth prior to moving on to the nodes at the next depth level.

Core Idea: Go broad first (level by level).

Mechanism: It uses a Queue to keep track of the nodes to visit.

Analogy (The Ripple Effect): Imagine dropping a stone in a pond. The search expands outwards in concentric circles (levels) from the starting node.

Common Applications:

Finding the shortest path between two nodes in an unweighted graph (because it always checks the closest nodes first).

Social networking website to find people within a certain degree of separation.
*/