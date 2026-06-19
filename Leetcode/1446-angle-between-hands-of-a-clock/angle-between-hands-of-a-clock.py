class Solution:
    def angleClock(self, h: int, m: int) -> float:
        mov = (15/60) * m
        b = h if h!=12 else 0
        
        hour_angle = (mov + (15*b)) *2
        min_angle = m*6
        # print(hour_angle,min_angle)
        
        diff = abs(hour_angle-min_angle)
        
        return diff if (diff < (360-diff)) else (360-diff)