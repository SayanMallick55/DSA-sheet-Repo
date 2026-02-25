// Check for Isomeric or not 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        map<char,char>m1,m2;
        for(int i=0;i<s.length();i++){
            char a = s[i];
            char b = t[i];
            if(m1.count(a) && m1[a]!=b){
                return 0;
            }
            if(m2.count(b) && m2[b]!=a){
                return 0;
            }
            m1[a]=b;
            m2[b]=a;
        }
        return true;
        
    }
};

int main(){


    return 0;
}