#!/usr/bin/python3
""" Define an island perimeter """


def island_perimeter(grid):
    """ Return the perimeter """

    height = len(grid)
    width = len(grid[0])
    left = 0
    below = 0

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                if grid[row - 1][col] == 0:
                    left += 1
                if grid[row + 1][col] == 0:
                    below += 1
    return (left + below) * 2
