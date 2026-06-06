class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        ans = []

        s = sum(nums)
        t = 0
        n = len(nums)

        for i in range(n):
            ans.append(abs(s-t-nums[i]))
            s-=nums[i]
            t+=nums[i]

        return ans

