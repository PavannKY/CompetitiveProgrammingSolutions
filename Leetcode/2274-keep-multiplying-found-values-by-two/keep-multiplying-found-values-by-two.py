class Solution:
    def findFinalValue(self, nums: List[int], original: int) -> int:
        while True:
            if original not in nums:
                return original
            original *= 2