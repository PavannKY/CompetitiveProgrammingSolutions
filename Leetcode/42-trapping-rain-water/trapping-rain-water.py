class Solution:
    def trap(self, h):
        left, right = 0, len(h) - 1
        left_max, right_max = 0, 0
        water = 0

        while left < right:
            if h[left] < h[right]:
                if h[left] >= left_max:
                    left_max = h[left]
                else:
                    water += left_max - h[left]
                left += 1
            else:
                if h[right] >= right_max:
                    right_max = h[right]
                else:
                    water += right_max - h[right]
                right -= 1

        return water