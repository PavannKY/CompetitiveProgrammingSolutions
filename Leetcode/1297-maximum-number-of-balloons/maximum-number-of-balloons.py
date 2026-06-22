class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        hashT = {
            'b':0,
            'a':0,
            'l':0,
            'o':0,
            'n':0,
        }
        count = 0
        for i in text:
            if i in hashT:
                hashT[i]+=1
        
        while (hashT['b']>=1 and hashT['a']>=1 and hashT['l']>=2 and hashT['o']>=2 and hashT['n']>=1):
            count+=1
            hashT['b']-=1
            hashT['a']-=1
            hashT['l']-=2
            hashT['o']-=2
            hashT['n']-=1
        
        # print(hashT)

        return count