class Solution:
    def isPalindrome(self, s: str) -> bool:
        print(list(s))
        new = []
        for i in list(s):
            if i.isalpha() or i.isdigit():
                new.append(i)
        
        print("new")
        print("".join(new))

        st = "".join(new).lower()

        return st == st[::-1]