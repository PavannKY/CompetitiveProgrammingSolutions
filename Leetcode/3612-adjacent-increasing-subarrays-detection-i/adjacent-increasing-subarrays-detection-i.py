class Solution:
    def hasIncreasingSubarrays(self, nums: List[int], k: int) -> bool:
        n = len(nums)
        for i in range(0, n - 2*k + 1):
            arr1 = nums[i:i+k]
            sortedarr = sorted(arr1)
            if arr1 == sortedarr and len(set(arr1)) == k:
                b = k+i
                arr2 = nums[b:b+k]
                new = sorted(arr2)
                if arr2 == new and len(set(arr2)) == k:
                    return True

        return False