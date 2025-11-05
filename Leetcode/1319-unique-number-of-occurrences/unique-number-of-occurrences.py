class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        hashT = {}

        for i in arr:
            if i not in hashT:
                hashT[i] = 0
            hashT[i] += 1
        
        vals = sorted(hashT.values())

        print(vals)
        print(list(set(vals)))

        return vals == sorted(list(set(vals)))