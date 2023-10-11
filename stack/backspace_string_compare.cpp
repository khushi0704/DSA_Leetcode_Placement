class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;

        for(auto x: s){
            if(!s1.empty() && x =='#'){
                s1.pop();
            }
            else if(x != '#' ){
                s1.push(x);
            }
        }
        for(auto x: t){
            if(!s2.empty() && x =='#'){
                s2.pop();
            }
            else if(x != '#' ){
                s2.push(x);
            }
        }
        if( s1.size() != s2.size()){
            return false;
        }
        else{
            while(!s1.empty() && !s2.empty()){
                if(s1.top() != s2.top()){
                    return false;
                }
                s1.pop();
                s2.pop();
            }
        }
        return true;
    }
};