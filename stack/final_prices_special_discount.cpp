class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        int n = prices.size();
        vector<int> ans(n);
        st.push(0);
    for(int i=n-1;i>=0;i--){
        int curr = prices[i];
        while(curr<st.top()){
            st.pop();
        }
        ans[i] = curr-st.top();
        st.push(curr);
    }
    return ans;
    }
};