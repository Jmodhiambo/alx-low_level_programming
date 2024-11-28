#!/usr/bin/python3
"""
This module calculates the perimeter of an island.
"""


def island_perimeter(grid):
    """
    Finds the perimeter of the islands in the grid.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:  # Land cell
                # Add 4 for the land cell
                perimeter += 4

                # Subtract for each adjacent land cell
                if row > 0 and grid[row - 1][col] == 1:  # Top neighbor
                    perimeter -= 1
                if row < rows - 1 and grid[row + 1][col] == 1:  # Bottom neigh.
                    perimeter -= 1
                if col > 0 and grid[row][col - 1] == 1:  # Left neighbor
                    perimeter -= 1
                if col < cols - 1 and grid[row][col + 1] == 1:  # Right neighb.
                    perimeter -= 1

    return perimeter
