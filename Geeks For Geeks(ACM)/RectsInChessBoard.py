class Solution:
    def rectanglesInChessBoard(self, n):
        num = int((n*(n+1))/2)
        sqr = num * num
        
        NoOfSqr = n*(n+1)*(2*n+1)//6
        
        return (sqr - NoOfSqr)