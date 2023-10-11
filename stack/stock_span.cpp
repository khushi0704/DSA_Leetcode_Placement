#include <bits/stdc++.h>
using namespace std;

vector<int> stockSpanner(vector<int> &stocks){
    vector<int> s;
    s.push_back(1);
	for(int i=0;i<stocks.size();i++){
        for(int j=i-1;j>=0;j--){
            // we have to reverse back 
            if(stocks[j]>stocks[i]){
                // subtract index
                s.push_back(i-j);
                break;
            }
        }
    }
    return s;
}