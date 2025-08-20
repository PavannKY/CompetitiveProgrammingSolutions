from math import sqrt

class Solution:
    
    @staticmethod
    def isPrime(n):
        if n == 1:
            return 0
        if n == 2:
            return 1
        
        for i in range(2,int(sqrt(n)) + 1):
            if n % i == 0:
                return 0
        
        return 1
    
    def primeFac(self, n):
        
        lst = []
        i = 2
        
        while n > 1:
            if self.isPrime(i) and n%i == 0:
                n //= i
                lst.append(i)
            
            else:
                i+=1
        
        ans = set(lst)
        
        return sorted(ans)