class Solution:
    def repeatedSumOfDigits (self,n):
        while n >= 10:
            rem = n % 10
            n = n//10
            n += rem
        
        return n
