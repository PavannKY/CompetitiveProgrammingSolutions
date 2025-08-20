class Solution:
    def closestNumber(self, n, m):
        q1 = (n // m) * m
        q2 = q1 + m
        
        a = abs(n - q1)
        b = abs(n - q2)
        
        if a < b:
            return q1
        elif b < a:
            return q2
        else:
            return q1 if abs(q1) > abs(q2) else q2