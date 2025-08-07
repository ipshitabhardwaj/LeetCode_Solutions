class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);  // Push opening brackets
            } else {
                if (st.empty()) return false;  // No matching opening
                char top = st.top();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;  // Mismatched pair
                }
                st.pop();  // Valid pair, pop opening bracket
            }
        }
        return st.empty();  // All brackets must be matched
    }
};
