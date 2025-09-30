class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        n = len(nums)

        if nums.count(1) == n:
            return n-1

        l = 0
        ans = 0
        count = 0
        num_0 = 0
        for r in range(n):
            if nums[r] == 1:
                count += 1
            elif nums[r] == 0:
                num_0 += 1
            while num_0 > 1:
                if nums[l] == 0:
                    num_0 -= 1
                else:
                    count -= 1
                l += 1
            ans = max(ans,count)
        return ans