#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Iamgooooodboy";
    map<char,int>mpp;
    for(int i =0 ;i<s.size();i++){
        mpp[s[i]]++;
    }
    cout<<mpp['Y'];
}