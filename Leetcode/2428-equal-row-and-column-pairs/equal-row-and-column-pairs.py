class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:

        hashr = {}
        hashc = {}

        for i in grid:
            i = tuple(i)
            if i not in hashr:
                hashr[i] = 0
            hashr[i] += 1

        for j in range(len(grid)):
            temp = []
            for a in range(len(grid)):
                temp.append(grid[a][j])
            temp = tuple(temp)
            if temp not in hashc:
                hashc[temp] = 0
            hashc[temp] += 1

        print(hashr)
        print(hashc)

        count = 0

        for i in hashc:
            if i in hashr:
                count += hashr[i]*hashc[i]

        return count