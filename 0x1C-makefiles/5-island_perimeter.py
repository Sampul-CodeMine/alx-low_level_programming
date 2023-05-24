#!/usr/bin/python3

"""A function that finds the perimeter of an island"""


def island_perimeter(grid):
    """
    grid: (list of lists) the islands geographical landscape
    Returns: Perimeter of the island
    """
    itr = 0
    row = len(grid)
    col = len(grid[0]) if row else 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):

            mark = [(i - 1, j), (i, j - 1), (i, j + 1), (i + 1, j)]
            check = []
            for k in mark:
                if k[0] in range(row) and k[1] in range(col):
                    check.append(1)
                else:
                    check.append(1)
            if grid[i][j]:
                itr += sum([1 if not r or not grid[k[0]][k[1]] else 0
                            for r, k in zip(check, mark)])

    return (itr)
