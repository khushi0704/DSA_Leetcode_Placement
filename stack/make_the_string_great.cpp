class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(auto x:s){
            if(!st.empty() && abs(st.top() - x) == 32){
                st.pop();
            }
            else{
                st.push(x);
            }
        }
        string ans;
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};
