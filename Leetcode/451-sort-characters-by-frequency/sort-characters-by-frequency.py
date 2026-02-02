class Solution:
    def frequencySort(self, s: str) -> str:
        
        hashT = {}
        for i in s:
            if i not in hashT:
                hashT[i] = 0
            hashT[i]+=1
        dec_dict = dict(sorted(hashT.items(), key=lambda item: item[1], reverse=True))
        ans = ""
        for i in dec_dict:
            for a in range(dec_dict[i]):
                ans+=i
        return ans