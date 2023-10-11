class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto x : s) {
            if (x == ')' || x == ']' || x == '}') {
                if (st.empty()) {
                    return false; // No matching opening bracket
                }
                char top = st.top();
                if ((x == ')' && top == '(') ||
                    (x == ']' && top == '[') ||
                    (x == '}' && top == '{')) {
                    st.pop();
                } else {
                    return false; // Mismatched brackets
                }
            } else {
                st.push(x);
            }
        }
        return st.empty(); // Stack should be empty if all brackets are matched
    }
};
