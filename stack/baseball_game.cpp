class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int n = operations.size();
        for(int i=0;i<n;i++){
            if(operations[i]=="+"){
                //push new score equal to sum of previous two scores
                int x = st.top();
                st.pop();
                int y = st.top();
                st.push(x);
                st.push(x+y);
            }
            else if(operations[i]=="D"){
                // double previous score
                int x = st.top();
                st.push(2*x);
            }
            else if(operations[i]=="C"){
                // remove previous score
                st.pop();
            }
            else{
                // its a number 
                // convert from string to integer
                st.push(stoi(operations[i]));
            }
        }
       // return the vector 
       int ans = 0;
       while(!st.empty()){
           int x = st.top();
           ans+=x;
           st.pop();
       }
       return ans;
    }
};