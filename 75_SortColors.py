class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n0 = 0
        n1 = 0
        n2 = 0

        for i in nums:
            if i == 0:
                n0+=1
            elif i == 1:
                n1+=1
            else:
                n2+=1

        for i in range(len(nums)):
            if n0!=0:
                nums[i] = 0
                n0-=1
            elif n1!=0:
                nums[i] = 1
                n1-=1
            elif n2!=0:
                nums[i] = 2
                n2-=1

