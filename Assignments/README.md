# Rotation Distance in Binary Trees

**PECST495 Advanced Data Structures**  
**Research Activity 1**  
**Submission Date:** 19 December 2025

## Overview

This project implements the **rotation distance** problem for binary trees as defined by Sleator, Tarjan, and Thurston (1988). 

For a given number of nodes \( n \) (where \( 3 \leq n \leq 7 \)):

- All possible binary trees are generated recursively (Catalan number structures).
- The **rotation graph** (associahedron graph) is constructed using NetworkX, where each node is a binary tree and edges represent a single rotation.
- The full **rotation distance matrix** is computed using BFS.
- Execution time and memory usage are benchmarked.
- The **graph diameter** (maximum rotation distance) is calculated for each \( n \).
- Visualizations of the rotation graphs are generated.

The implementation exactly follows the requirements of the assignment.

## Features

- Automatic execution for \( n = 3 \) to \( n = 7 \)
- Recursive generation of all binary trees as nested tuples
- Efficient rotation generation
- Rotation graph construction with NetworkX
- Distance matrix and graph diameter computation
- Runtime benchmarking (tree generation, graph construction, distance matrix)
- Memory profiling (trees, graph, distance matrix)
- High-resolution PNG visualizations of each rotation graph
- Results exported to CSV files

## Repository Structure
rotation-distance-trees/
├── Source/
│   └── main.py                 # Main Python implementation
├── Results/
│   ├── execution_times.csv     # Runtime benchmarking
│   ├── memory_usage.csv        # Memory usage profiling
│   ├── rotation_graph_n3.png   # Rotation graph for n=3
│   ├── rotation_graph_n4.png
│   ├── rotation_graph_n5.png
│   ├── rotation_graph_n6.png
│   └── rotation_graph_n7.png
├── README.md                   # This file
├── requirements.txt            # Python dependencies
└── report.pdf                  # LaTeX report (optional but recommended)
