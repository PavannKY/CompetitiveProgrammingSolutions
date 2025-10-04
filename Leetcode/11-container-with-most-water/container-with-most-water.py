class Solution:
    def maxArea(self, h: List[int]) -> int:
        ans = 0
        l = len(h)
        j = l-1
        k = 0
        for i in range(0,l):
            c = min(h[k],h[j])
            waterQuantity = (j - k) * c
            if c == h[k]:
                k += 1
            else:
                j -= 1
            
            if ans < waterQuantity:
                ans = waterQuantity
            # print(ans)

        return ans