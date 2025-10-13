class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        hash1 = {}
        hash2 = {}
        ans1 = []
        ans2 = []

        for i in nums1:
            hash1[i] = 1
        for j in nums2:
            hash2[j] = 1
        
        for key in hash1:
            if key not in hash2:
                ans1.append(key)
        for key in hash2:
            if key not in hash1:
                ans2.append(key)

        answer = []
        answer.append(ans1)
        answer.append(ans2)
        return answer
