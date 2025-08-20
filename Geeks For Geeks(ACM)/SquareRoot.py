class Solution:
    def floorSqrt(self, n):
        num = int(n/1) + 1
        
        if n == 1:
            return 1
        
        for i in range(1,num):
            if i*i == n:
                return i
                
            elif i*i > n:
                return i-1