#!/usr/bin/python3
""" Module for return perimeter of the island """


def island_perimeter(grid):
    """Python function to return the perimeter of an island"""

    total = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                elif i == 0 or grid[i - 1][j] == 0:
                    total += 1
                elif j == 0 or grid[i][j - 1] == 0:
                    total += 1
                elif i == len(grid) - 1 or grid[i + 1][j] == 0:
                    total += 1
                elif j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    total += 1
    return total
