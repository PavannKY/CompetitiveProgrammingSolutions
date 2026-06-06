class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        leftsum = []
        rightsum = []

        s = sum(nums)
        s2 = s
        n = len(nums)

        for i in range(n):
            leftsum.append(s-nums[i])
            s-=nums[i]
            rightsum.insert(0, s2-nums[n-1-i])
            s2-=nums[n-1-i]

        ans = [abs(leftsum[i]-rightsum[i]) for i in range(n)]

        return ans

