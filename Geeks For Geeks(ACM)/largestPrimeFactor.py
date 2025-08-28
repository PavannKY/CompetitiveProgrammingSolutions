class Solution:
    def largestPrimeFactor(self, n):
        ans = 0
        i=2
        while i * i <= n:
            while n%i==0:
                n//=i
                ans=i
                
            if i==2:
                i+=1
            else:
                i+=2
        
        if n > 2:
            ans = n
        return ans