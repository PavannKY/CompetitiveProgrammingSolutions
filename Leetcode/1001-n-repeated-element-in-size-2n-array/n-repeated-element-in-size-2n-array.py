class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        n = len(nums)//2
        hasht = {}
        for i in nums:
            if i not in hasht:
                hasht[i] = 0
            hasht[i] += 1
            if(hasht[i] == n):
                return i