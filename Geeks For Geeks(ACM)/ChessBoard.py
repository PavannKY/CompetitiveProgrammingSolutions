def isValid(n,arr):
    
    for i in range(0,n):
        for j in range(0,n):
            if ((i+j) % 2 == 0 and arr[i][j] != 1) or ((i+j) % 2 == 1 and arr[i][j] != 0):
                return False
    
    return True


matrix = [[1,0],[0,1]]
size = len(matrix)
print(isValid(size , matrix))