class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start = 0, maxLength = 1;

        for (int i = 0; i < s.length(); ++i) {
  
            expandAroundCenter(s, i, i, start, maxLength);
            
            expandAroundCenter(s, i, i + 1, start, maxLength);
        }

        return s.substr(start, maxLength);
    }

private:
    void expandAroundCenter(const string& s, int left, int right, int& start, int& maxLength) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }
    }
};
