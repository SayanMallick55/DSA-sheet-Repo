
#include<bits/stdc++.h>
using namespace std;

void fun(int ind,vector<int>&ans,vector<int>&num,int n){
    if(ind==n){
        if(ans.size()==0){
            cout<<"{} ";
            return;
        }
        else{
            for(auto it:ans){
                cout<<it<<" ";
            }
        }
        cout << endl;
        return;
    }
    
    ans.push_back(num[ind]);
    fun(ind+1,ans,num,n);
    ans.pop_back();
    fun(ind+1,ans,num,n);
    return;
}

int main() {
    vector<int> num = {3,1,2};
    vector<int> ans;

    fun(0, ans, num, num.size());


    return 0;
}