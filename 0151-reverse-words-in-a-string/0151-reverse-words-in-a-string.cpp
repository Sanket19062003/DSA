class Solution {
public:
   string reverseWords(string s) {
        stack<string> wordStack;
        string word = "", result = "";

        // Split the string into words and push them onto the stack
        for (char c : s) {
            if (c == ' ') {
                if (!word.empty()) {
                    wordStack.push(word);
                    word = "";
                }
            } else {
                word += c;
            }
        }
        // Push the last word if there is any
        if (!word.empty()) {
            wordStack.push(word);
        }

        // Pop words from the stack to reverse their order
        while (!wordStack.empty()) {
            result += wordStack.top();
            wordStack.pop();
            if (!wordStack.empty()) {
                result += " ";
            }
        }

        return result;
    }
};