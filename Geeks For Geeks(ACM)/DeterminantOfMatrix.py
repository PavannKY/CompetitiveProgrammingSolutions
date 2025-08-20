class Solution:
    def determinantOfMatrix(self,arr,n):
        if n == 1:
            return arr[0][0]
            
        if n == 2:
            return (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0])
        
        det = 0
        
        for i in range(n):
            new_mat = []
            for row in arr[1:]:
                new_row = row[:i] + row[i+1:]
                new_mat.append(new_row)
            
            m = (-1) ** i
            num = arr[0][i]
            det += m * num * self.determinantOfMatrix(new_mat,len(new_mat))
            
        return det