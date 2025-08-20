class Solution:
    @staticmethod
    def SOE(n):
        lst = [1] * (n+1)
        lst[0] = 0
        lst[1] = 0
        
        for i in range(2,n+1):
            j = 2
            while i * j <= n:
                lst[i*j] = 0
                j+=1
        
        return lst
    
    def sieve(self,n):
         
        hsh = Solution.SOE(n)
        # print(hsh)
        
        ans = [i for i in range(len(hsh)) if hsh[i] == 1]
        return ans
