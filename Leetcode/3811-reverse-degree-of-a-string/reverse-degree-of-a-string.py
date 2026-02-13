class Solution:
    def reverseDegree(self, s: str) -> int:
        ans = 0
        count = 1
        for i in s:
            ans += (26 - int(ord(i)) + int(ord('a'))) * count
            count += 1
        return ans