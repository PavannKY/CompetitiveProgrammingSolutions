class Solution:
    def isPrefixOfWord(self, sen: str, sW: str) -> int:
        wordList = []
        temp = ""
        m = len(sW)
        for i in range(len(sen)):
            if sen[i] != " ":
                temp += sen[i]
            else:
                wordList.append(temp)
                temp = ""
        wordList.append(temp)

        for i in range(len(wordList)):
            n = 0
            arr = ""
            while n < m and len(wordList[i]) >= m:
                if wordList[i][n] == sW[n]:
                    arr += wordList[i][n]
                    print(wordList[i][n], "==" , sW[n])
                    print(arr)
                    n+=1
                    if arr == sW:
                        return i+1
                else:
                    arr = ""
                    break
        return -1