#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "";
    cin>>s;
    int size=s.size();
    map<char,int>mpp;
    for(auto it:s){
        mpp[it]++;
    }
    if(mpp.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}

// hiujjhtr jjihn 