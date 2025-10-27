class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        xor1 = 0
        xor2 = nums[0]
        for i in range(1,n+1):
            xor1 = xor1 ^ i
        for j in range(1,len(nums)):
            xor2 = xor2 ^ nums[j]
        
        return xor1 ^ xor2