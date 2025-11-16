class Solution:
    def numSub(self, s: str) -> int:
        s = list(s)
        n = len(s)
        # print(n)
        a = 0
        count = 0
        for i in range(0,n):
            if s[i]=="1":
                count += 1
            else:
                a += ((count+1) * count ) // 2
                print(a,count)
                count = 0
        a += ((count+1) * count ) // 2
        print(a)

        return a % (10**9+7)