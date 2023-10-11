#include <bits/stdc++.h>
void insertAtBottom(stack<int>& myStack,int x){
    if(myStack.empty()){
        //base condition
        myStack.push(x);
        return;
    }
    // recursive case
    int temp = myStack.top();
    myStack.pop();
    insertAtBottom(myStack,x);
    myStack.push(temp);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    insertAtBottom(myStack,x);
    return myStack;  
}
