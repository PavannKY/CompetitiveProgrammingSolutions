class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        n = len(gain)
        for i in range(1,n):
            gain[i] = gain[i] + gain[i-1]
        gain.insert(0,0)

        return max(gain)