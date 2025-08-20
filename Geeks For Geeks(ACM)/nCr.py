class Solution:
    @staticmethod
    def fact(n):
        if n == 1 or n == 0:
            return 1
        
        ans = 1
        for i in range(2,n+1):
            ans *= i
        
        return ans
    
    def nCr(self, n, r):
        ans = self.fact(n)/(self.fact(n-r) * self.fact(r))
        return int(ans)