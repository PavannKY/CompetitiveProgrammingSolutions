class Solution:
    def minElement(self, nums: List[int]) -> int:
        for i in range(len(nums)):
            n = nums[i]
            s = 0
            while n:
                s+=(n%10)
                n = n//10
            nums[i] = s
        
        return min(nums)
                