#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool func(string s,int ind, int cnt){
        int n=s.size();
        if(cnt<0){
            return false;
        }
        if(ind==n){
            return (cnt==0);
        }
        if(s[ind]=='('){
            return func(s,ind+1,cnt+1);
        }
        if(s[ind]==')'){
            return func(s,ind+1,cnt-1);
        }
        return func(s,ind+1,cnt+1) || func(s,ind+1,cnt-1) || func(s,ind+1,cnt);
    }

    bool checkValidString(string s) {
        return func(s,0,0);
    }
};




// OPTIMAL 