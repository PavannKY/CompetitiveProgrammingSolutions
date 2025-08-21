class Solution:
    
    def nthRowOfPascalTriangle(self, n):
        if n == 1:
            return [1]
        if n == 2:
            return [1,1]
            
        arr = self.nthRowOfPascalTriangle(n-1)
        ans = []
        ans.append(1)
        
        for i in range(1,n-1):
            temp = arr[i] + arr[i-1]
            ans.append(temp)
        
        ans.append(1)

        return ans