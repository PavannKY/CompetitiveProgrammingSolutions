class Solution:
    def sumFourDivisors(self, nums: List[int]) -> int:
        def is_prime(num):
            if num < 2:
                return False
            for i in range(2,int(math.sqrt(num) + 1)):
                if num%i == 0:
                    return False
            return True
        
        ans = 0

        for i in nums:
            root = round(i **(1/3))
            
            if root**3 == i and is_prime(root):
                ans += 1 + root + root**2 + i
                continue
            
            for a in range(2, int(math.sqrt(i)) + 1):
                if i % a == 0:
                    j = i // a
                    if a != j and is_prime(a) and is_prime(j):
                        ans += 1 + a + j + i
                    break

        return ans