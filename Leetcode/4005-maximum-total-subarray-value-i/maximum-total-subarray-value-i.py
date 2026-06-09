class Solution:
    def maxTotalValue(self, nums: List[int], k: int) -> int:
        m = min(nums)
        n = max(nums)
        
        return k*(n-m)