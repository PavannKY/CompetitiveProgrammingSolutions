class Solution:
    def combine(self, n: int, k: int):
        result = []
        temp = []
        
        def backtrack(start):
            if len(temp) == k:
                result.append(temp.copy())
                return
            
            for num in range(start, n + 1):
                temp.append(num)
                backtrack(num + 1)
                temp.pop()
        
        backtrack(1)
        return result