class Solution:
    def sumSubarrayMins(self, arr: List[int]) -> int:
        stack = []
        ans = 0
        n = len(arr)
        MOD = 10**9 + 7
        for i in range(n+1):
            while stack and (i==n or arr[stack[-1]]>=arr[i]):
                idx = stack.pop()
                
                left = idx - (stack[-1] if stack else -1)
                right = i-idx

                ans+=(left*right*arr[idx])

            stack.append(i)

        return ans%MOD