class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        if dividend == divisor:
            return 1

        sign = -1 if (dividend < 0) ^ (divisor < 0) else 1

        n = abs(dividend)
        d = abs(divisor)

        ans = 0

        while n >= d:
            count = 0

            while n >= (d << count):
                count += 1

            ans += (1 << (count - 1))
            n -= (d << (count - 1))

        ans *= sign

        INT_MAX = 2**31 - 1
        INT_MIN = -2**31

        if ans > INT_MAX:
            return INT_MAX
        if ans < INT_MIN:
            return INT_MIN

        return ans