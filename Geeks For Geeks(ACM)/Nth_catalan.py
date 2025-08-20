class Solution:
    
    @staticmethod
    def fact(n):
        
        result = 1
        
        for i in range(1,n+1):
            result *= i
        
        return result
    
    def findCatalan(self, n):
        
        # ans = (2n)!/(n+1)! n!
        
        ans = Solution.fact(2*n)/(Solution.fact(n+1)*Solution.fact(n))
        
        return int(ans)