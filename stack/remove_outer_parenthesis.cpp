class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        stack<char> st;
        for(auto x:s){
            // open parenthesis
            if(x=='('){
                // check first if stack is not empty 
                if(!st.empty()){
                    // push it 
                    ans.push_back(x);
                }
                st.push(x);
            }
            else{
                // closing bracket 
                st.pop();
                if(!st.empty()){
                    // push it 
                    ans.push_back(x);
                }
            }
        }
        return ans;
    }
};