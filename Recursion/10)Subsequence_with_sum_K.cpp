
#include<bits/stdc++.h>
using namespace std;

void fun(int ind,vector<int>&ans,vector<int>&num,int n,int sum,int s){
    
    if(ind==n){
        if(s==sum){
            for(auto it:ans){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ans.push_back(num[ind]);
    s=s+num[ind];
    fun(ind+1,ans,num,n,sum,s);
    s=s-num[ind];
    ans.pop_back();
    fun(ind+1,ans,num,n,sum,s);
    return;
    
}

int main() {
    vector<int> num = {1,2,1};
    vector<int> ans;

    fun(0, ans, num, num.size(),2,0);


    return 0;
}