class Solution:
    def countValidSelections(self, nums: List[int]) -> int:
        n = len(nums)
        ans = 0
        for i in range(n):
            if nums[i] == 0:
                sum1 = sum(nums[0:i])
                sum2 = sum(nums[i+1:n])
                diff = abs(sum1-sum2)

                if diff == 1:
                    ans += 1
                elif diff == 0:
                    ans += 2
        
        return ans