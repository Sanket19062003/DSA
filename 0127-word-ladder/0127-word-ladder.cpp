class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>> q;
        unordered_set<string> st(wordList.begin(), wordList.end());
        if(st.find(endWord) == st.end()) return 0;
        q.push({beginWord,1});
        while(!q.empty()){
            string word = q.front().first;
            int cnt = q.front().second;
            q.pop();
            if(word == endWord) return cnt;
            if(st.find(word) != st.end()) st.erase(word);
            for(int i =0;i<word.size();i++){
                char original_ch = word[i];
                for(char ch = 'a'; ch<='z';ch++){
                    word[i] = ch;
                    if(st.find(word) != st.end()){
                        st.erase(word);
                        q.push({word,cnt+1});
                    }
                }
                word[i] = original_ch;
            }
        }
        return 0;
    }
};