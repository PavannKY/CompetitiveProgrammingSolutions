class Solution:
    def kthDigit(self, a, b, k):
        num = a**b
        
        lst = [int(i) for i in str(num)]
        
        ans = lst[(len(lst) - k)]
        return ans