class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        n = len(nums)
        l = 0
        r = 0
        nums_zeros = 0
        num = 0
        ans = 0

        for r in range(n):
            if nums[r] == 0:
                nums_zeros += 1
            while nums_zeros > k:
                if nums[l] == 0:
                    nums_zeros -= 1
                l+=1
            
            w = r - l + 1
            ans = max(ans,w)

        return ans