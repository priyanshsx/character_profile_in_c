# Character Profiles in C 

# C Structs: Character Profile 👾

A lightweight C project designed to practice grouping related variables into custom data types using `struct`. 

## Overview
Unlike Python, C does not have built-in classes or dictionaries. This project demonstrates how to build a custom `Player` blueprint, initialize individual character instances, and dynamically update their stats using a regeneration loop.

## Core Concepts
*   **Custom Data Types:** Defining a `struct` to group strings (`char` arrays) and integers (`int`) under a single entity.
*   **Dot Notation:** Accessing and modifying specific attributes of an instance (e.g., `player1.health`).
*   **String Manipulation:** Utilizing `<string.h>` and `strcpy()` to correctly assign string values to character arrays.
*   **Data vs. Presentation:** Keeping raw data clean and utilizing `\n` in `printf` to strictly control terminal output formatting.

## Compilation & Usage

**1. Compile the code:**
```bash
gcc struct_project.c -o struct_project