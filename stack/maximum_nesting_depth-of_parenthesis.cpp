class Solution {
public:
    int maxDepth(string s) {
        //maintain a count variable 
        int count=0;
        int max=0;
        stack<char> st;
        for(int i=s.size();i>=0;i--){
            //closing bracket
            if(s[i]==')'){
                // push inside the stack
                st.push(s[i]);
                count++;
            }
            else if(s[i]=='('){
                //opening bracket 
               // update max
               if(count>max){
                   max=count;
               }
               //keep popping
               st.pop();
               count--;
            }
        }
        return max;
    }
};