class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows == 1:
            return [[1]]
        if numRows == 2:
            return [[1],[1,1]]
        
        new = self.generate(numRows-1)
        arr = new[-1]
        ans = []
        ans.append(arr[0])

        for i in range(1,len(arr)):
            ans.append(arr[i] + arr[i-1])

        ans.append(arr[-1])

        new.append(ans)
        return new
        