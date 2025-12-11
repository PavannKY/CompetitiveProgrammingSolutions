class Solution:
    def countCoveredBuildings(self, n: int, b: List[List[int]]) -> int:
        row_min = {}
        row_max = {}
        col_min = {}
        col_max = {}

        for x, y in b:
            if y not in row_min:
                row_min[y] = x
                row_max[y] = x
            else:
                row_min[y] = min(row_min[y], x)
                row_max[y] = max(row_max[y], x)

            if x not in col_min:
                col_min[x] = y
                col_max[x] = y
            else:
                col_min[x] = min(col_min[x], y)
                col_max[x] = max(col_max[x], y)

        count = 0
        for x, y in b:
            if row_min[y] < x < row_max[y] and col_min[x] < y < col_max[x]:
                count += 1

        return count
