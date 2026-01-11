class Solution:
    def centeredSubarrays(self, nums: List[int]) -> int:
        ans = 0
        n = len(nums)
        
        for i in range(0,n):
            for j in range(1,n+1):
                new = nums[i:j]
                if not new:
                    continue
                # print(new)            
                # print(i,j)
                s = sum(new)
                if s in new:
                    ans += 1

        return ans