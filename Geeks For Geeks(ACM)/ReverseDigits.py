class Solution:
    def reverseDigits(self, n):
        ans = 0
        while n:
            rem = n % 10
            ans = (ans * 10) + rem
            n //= 10
        return ans