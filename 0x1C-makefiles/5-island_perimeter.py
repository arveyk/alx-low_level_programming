#!/usr/bin/python3
""" Functions to compute island perimeter
"""


def island_perimeter(grid):
    """ Function for computing an islands perimeter
    Args:
        grid: the mapping of the island in list form
    Returns: the perimeter
    """
    sum_of = 0
    for t in grid:
        for d in range(len(t)):
            if t[d - 1] == 1 and t[d] == 1:
               sum_of += 1
            if t[d] == 1 and t[d - 1] == 0:
                sum_of += 1
        print(d, end=" ");
    return sum_of
