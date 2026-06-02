class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        st = []
        nums2copy = nums2.copy()
        n1 = len(nums1)
        n2 = len(nums2)
        
        for i in range(n2-1,-1,-1):
            while st and st[-1] <= nums2[i]:
                st.pop()

            if not st:
                st.append(nums2[i])
                nums2copy[i] = -1
            else:
                nums2copy[i] = st[-1]
                st.append(nums2[i])
        # ans = []
        # for i in nums1:
        #     ans.append()
        ans = []
        for i in nums1:
            idx = nums2.index(i)
            ans.append(nums2copy[idx])

        return ans