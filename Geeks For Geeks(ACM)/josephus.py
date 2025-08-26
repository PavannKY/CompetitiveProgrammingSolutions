class Solution:
    def josephus(self,n,k):
        
        hash = [1] * n
        
        count = n
        index = 0
        step = 0
        
        while count>1:
            if hash[index] == 1:
                step += 1
                
                if step == k:
                    hash[index] = 0
                    count -= 1
                    step = 0
                
            index = (index+1) % n
        
        for i in range(0,n):
            if hash[i] == 1:
                return i+1