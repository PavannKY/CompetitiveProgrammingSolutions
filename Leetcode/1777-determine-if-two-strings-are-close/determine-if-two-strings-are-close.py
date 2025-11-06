class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        hash1 = {}
        hash2 = {}

        for i in list(word1):
            if i not in hash1:
                hash1[i] = 0
            hash1[i] += 1
        for i in list(word2):
            if i not in hash2:
                hash2[i] = 0
            hash2[i] += 1

        print(hash1)
        print(hash2)

        hash1Vals = sorted(hash1.values())
        hash2Vals = sorted(hash2.values())

        values = (hash1Vals == hash2Vals)

        alpha = (sorted(set(word1)) == sorted(set(word2)))

        return (values and alpha)