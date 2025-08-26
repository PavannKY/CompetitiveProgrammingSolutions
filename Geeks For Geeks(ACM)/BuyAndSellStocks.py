class Solution:
    def maximumProfit(self, arr):
        profit = 0
        iSmall = 0

        for i in range(0,len(arr)):
            if arr[iSmall] > arr[i]:
                iSmall = i

            elif arr[iSmall] < arr[i]:
                if arr[i] - arr[iSmall] > profit:
                    profit = arr[i] - arr[iSmall]

        return profit