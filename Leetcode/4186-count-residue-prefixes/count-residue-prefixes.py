class Solution:
    def residuePrefixes(self, s: str) -> int:
        n = len(s)
        ans = 0
        for i in range(0,n):
            dist = 0
            modulo3 = 0
            new = s[0:i+1]
            modulo3 = (i+1) % 3
            print(new)
            print(modulo3)

            alpha = []
            for j in list(new):
                if j not in alpha:
                    alpha.append(j)
                    dist+=1
            print(alpha)
            print(dist)

            if dist == modulo3:
                ans+=1

        return ans