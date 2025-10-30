class Solution:
    def spiralOrder(self, matrix: List[List[int]],a=0) -> List[int]:
        n = len(matrix)
        m = len(matrix[0])
        if n == 0 or m == 0:
            return []
        
        res = []
        # top row
        for i in range(m):
            res.append(matrix[a][i])
        
        # right column
        for j in range(1, n):
            res.append(matrix[j][m - 1])
        
        
        # bottom row
        if n > 1:
            for k in range(m - 2, -1, -1):
                res.append(matrix[n - 1][k])
        
        # left column
        if m > 1:
            for l in range(n - 2, 0, -1):
                res.append(matrix[l][0])
        
        # spiralOrder(matrix[a:n-1][a:m-1],a+=1)
        new = [row[1:m-1] for row in matrix[1:n-1]]
        res += self.spiralOrder(new) if new else []

        return res