class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        def BinList(n, bits):
            return [int(bit) for bit in format(n, f'0{bits}b')]
        
        n = 2**len(nums)
        l = len(nums)
        ans = []
        for i in range(0,n):
            bin_list = BinList(i,l)
            print(bin_list)
            temp = []
            for j in range(l):
                if bin_list[j] == 1:
                    temp.append(nums[j])
            
            ans.append(temp)
        
        return ans