class Solution(object):
    def groupAnagrams(self, strs):
        res = defaultdict(list)
        for s in strs:
            hash = [0] * 26
            for c in s:
                hash[ord(c) - ord("a")] += 1
            
            res[tuple(hash)].append(s)

        return res.values()