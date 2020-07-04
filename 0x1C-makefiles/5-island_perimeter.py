#!/usr/bin/python3
""" Define an island perimeter """


def island_perimeter(grid):
    """ Return the perimeter """

    height = len(grid)
    width = len(grid[0])
    peri = 0

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                peri += 1
    return (peri + 1) * 2
