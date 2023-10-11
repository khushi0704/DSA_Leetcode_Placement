#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> previous_smaller(vector < int > & heights){
   // create a stack 
   stack<int> st;
   vector<int> ans;
   int n = heights.size();
   // previous smaller 
   // next smaller
   
   for(int i=0;i<=n;i++){
     int curr = heights[i];
     while(!st.empty() && (heights[st.top()]>=curr)){
       st.pop();
     }
     int ele = st.empty() ? -1:st.top();
     ans.push_back(ele);
     st.push(i);
   }
   return ans;
}
vector<int> next_smaller(vector < int > & heights){
   // create a stack 
   stack<int> st;
   vector<int> ans;
   int n = heights.size();
   // previous smaller 
   // next smaller
   
   for(int i=n-1;i>=0;i--){
     int curr = heights[i];
     while(!st.empty() && (heights[st.top()]>=curr)){
       st.pop();
     }
     int ele = st.empty() ? n:st.top();
     ans.push_back(ele);
     st.push(i);
   }
   reverse(ans.begin(),ans.end());
   return ans;
}
 int largestRectangle(vector < int > & heights) {

   int res = 0;
   int n = heights.size();
   vector<int> ps = previous_smaller(heights);
   vector<int> ns = next_smaller(heights);
   for(int i=0;i<n;i++){
     int curr = (ns[i]-ps[i]-1)*heights[i];
     if(curr>res){
       res=curr;
     }
   }
   return res;
 }