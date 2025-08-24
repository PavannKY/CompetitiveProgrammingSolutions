class Solution:
    def squaresInChessBoard(self, n):
        
        ans = 0
        for i in range(1,n+1):
            ans += i*i
        return ans