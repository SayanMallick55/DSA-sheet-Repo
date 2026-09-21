
#include<bits/stdc++.h>
using namespace std;

void fun(int n,vector<int>&ds,vector<vector<int>>&ans,vector<int>&freq,vector<int>& nums){
    if(ds.size()==n){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<n;i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            fun(n,ds,ans,freq,nums);
            freq[i]=0;
            ds.pop_back();

        }
    }
}0

vector<vector<int>> permute(vector<int>& nums){

}

int main() {

    return 0;
}