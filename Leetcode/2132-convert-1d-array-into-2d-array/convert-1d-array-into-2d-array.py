class Solution:
    def construct2DArray(self, og: List[int], m: int, n: int) -> List[List[int]]:
        if m*n != len(og):
            return []

        ans = []
        for i in range(m):
            sub = []
            for j in range(n):
                sub.append(og[i * n + j])
            ans.append(sub)
        
        return ans