// Approach 1: Sorting Halves (O(n log n))

class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        int pivot=n/2;
        sort(s.begin(),s.begin()+pivot);
        sort(s.end()-pivot,s.end());
        reverse(s.end()-pivot,s.end());
        return s;
    }
};