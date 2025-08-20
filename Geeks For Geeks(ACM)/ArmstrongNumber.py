class Solution:
    def armstrongNumber (self, n):
        copy = n
        ans = 0
        while copy:
            rem = copy % 10
            rem = rem ** 3
            ans += rem
            copy //= 10
        
        return n == ans