class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n = s.size();
        for(int i=n-1;i>=0;i--){
            int cur = s[i];
            if(!st.empty() && st.top()==cur){
                st.pop();
            }
            else{
                st.push(cur);
            }
        }
        string ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};