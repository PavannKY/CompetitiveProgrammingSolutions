class Solution:
    @staticmethod
    def Prime(n):
        factors = []
        i = 2
        
        while i*i <= n:
            while n % i == 0:
                factors.append(i)
                n //= i
            
            if i == 2:
                i += 1
            else:
                i += 2
                
        if n > 2:
            factors.append(n)
        
        return set(factors)

    
    def etf(self, n):
        
        fact = Solution.Prime(n)
        result = n
        
        for i in fact:
            result *= 1 - (1/i)
        
        if result - int(result) > 0.5:
            result += 1

        return int(result)