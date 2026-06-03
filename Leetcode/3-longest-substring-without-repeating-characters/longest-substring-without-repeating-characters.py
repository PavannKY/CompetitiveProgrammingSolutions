class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        ans = 0 
        for i in range(n):
            temp = []
            t = 0
            for j in range(i,n):
                if s[j] not in temp:
                    temp.append(s[j])
                    t+=1
                
                else:
                    break
                
            if t > ans:
                ans = t
        
        return ans