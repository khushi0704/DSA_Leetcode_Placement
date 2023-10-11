#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int>& s, int x) {
    if(s.empty()){
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(temp);
}

void reverseStack(stack<int> &st) {
    if(st.empty()){
        return;
    }
    int t = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,t);
}