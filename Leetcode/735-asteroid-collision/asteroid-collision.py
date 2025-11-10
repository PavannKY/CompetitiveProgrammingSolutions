class Solution:
    def asteroidCollision(self, arr: List[int]) -> List[int]:
        stack = []
        for i in arr:
            while stack and i < 0 and stack[-1] > 0:
                if abs(stack[-1]) < abs(i):
                    stack.pop()
                    continue
                elif abs(stack[-1]) == abs(i):
                    stack.pop()
                break

            else:
                stack.append(i)

        return stack