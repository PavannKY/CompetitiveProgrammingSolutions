class Solution:
    def findXSum(self, nums: List[int], k: int, x: int) -> List[int]:
        def x_sum(arr):
            hashT = {}
            xsum = 0
            for i in arr:
                if i not in hashT:
                    hashT[i] = 0
                hashT[i] += 1
            sorted_items = sorted(
                hashT.items(),key=lambda item: (item[1], item[0]), reverse=True
            )
            top_elements = set([val for val, _ in sorted_items[:x]])
            total = sum(num for num in arr if num in top_elements)    
                        
            return total

        i = 0
        ans = []
        n = len(nums)
        for i in range(0,n-k+1):
            subArray = nums[i:i+k]
            ele = x_sum(subArray)
            ans.append(ele)
        
        return ans