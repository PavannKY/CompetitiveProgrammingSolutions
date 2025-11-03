class Solution:
    def minCost(self, colors: str, nT: List[int]) -> int:
        ans = 0
        
        for i in range(1, len(colors)):
            if colors[i] == colors[i-1]:
                ans += min(nT[i], nT[i-1])
                nT[i] = max(nT[i], nT[i-1])
        
        return ans