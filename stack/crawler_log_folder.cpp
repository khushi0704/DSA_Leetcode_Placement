class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for(auto x: logs){
            if(x == "./"){
                // remain in same folder
                continue;
            }
            else if(x == "../" && !st.empty()){
                st.pop();
            }
            else if(x == "../"){
                continue;
            }
            else{
                st.push(x);
            }
        }
        return st.size();
    }
};