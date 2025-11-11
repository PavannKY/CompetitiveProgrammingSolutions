class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> words;
        string temp;
        for(char ch : sentence) {
            if(ch != ' ') temp += ch;
            else { words.push_back(temp); temp.clear(); }
        }
        words.push_back(temp);

        int m = searchWord.size();
        for(int i = 0; i < words.size(); i++) {
            if(words[i].size() >= m && words[i].substr(0, m) == searchWord)
                return i + 1;
        }
        return -1;
    }
};
