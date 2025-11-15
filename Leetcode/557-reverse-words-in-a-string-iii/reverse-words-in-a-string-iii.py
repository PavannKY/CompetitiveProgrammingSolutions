class Solution:
    def reverseWords(self, s: str) -> str:
        i = 0
        j = 0
        n = len(s)
        st = []
        for i in s.split():
            st.append(i[::-1])
        print(st)
        return " ".join(st)