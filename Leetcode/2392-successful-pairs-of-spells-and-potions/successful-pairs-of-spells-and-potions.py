class Solution:
    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        n = len(spells)
        m = len(potions)
        potions.sort()
        pairs = []
        for spell in spells:
            l = 0
            r = m-1
            res = m
            while l <= r:
                mid = (l+r)//2
                if (potions[mid] * spell) >= success:
                    res = mid
                    r = mid-1

                else:
                    l = mid+1

            pairs.append(m-res)
       
        return pairs