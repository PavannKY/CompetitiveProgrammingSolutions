class Solution:
    def isPalindrome(self, n):
        return n == int(str(n)[::-1])