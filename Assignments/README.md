# Rotation Distance in Binary Trees

**PECST495 Advanced Data Structures**  
**Research Activity 1**  

## Overview

This project implements the **rotation distance** problem for binary trees as defined by Sleator, Tarjan, and Thurston (1988).  

For \( n \) ranging from 3 to 7:
- All possible binary trees are generated recursively.
- The **rotation graph** (associahedron graph) is built using NetworkX.
- The full rotation distance matrix is computed via BFS.
- Runtime and memory usage are benchmarked.
- Rotation graphs are visualized as high-resolution plots.
- The graph diameter (maximum rotation distance) is reported.

## Repository Structure

```bash
rotation-distance-trees/
├── Source/
│   └── main.py                      # Main Python implementation
├── Results/
│   ├── execution_times.csv          # Runtime benchmarking results
│   ├── memory_usage.csv             # Memory usage profiling results
│   ├── rotation_graph_n3.png        # Rotation graph visualization (n=3)
│   ├── rotation_graph_n4.png        # Rotation graph visualization (n=4)
│   ├── rotation_graph_n5.png        # Rotation graph visualization (n=5)
│   ├── rotation_graph_n6.png        # Rotation graph visualization (n=6)
│   └── rotation_graph_n7.png        # Rotation graph visualization (n=7)
├── README.md                        # This file
├── requirements.txt                 # Python dependencies (pip freeze)
└── report.pdf                       # Compiled LaTeX report (optional)
