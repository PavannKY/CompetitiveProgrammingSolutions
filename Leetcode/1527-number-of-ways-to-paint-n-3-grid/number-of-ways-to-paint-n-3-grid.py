class Solution:
    def numOfWays(self, n: int) -> int:
        mod = 10**9 + 7

        A = 6
        B = 6

        for _ in range(n-1):
            newA = (2*A + 2*B) % mod
            newB = (2*A + 3*B) % mod
            A = newA
            B = newB

        return (A+B) % mod