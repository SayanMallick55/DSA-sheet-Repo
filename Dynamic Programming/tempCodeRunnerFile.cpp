#include <bits/stdc++.h>
using namespace std;


int fun(int n,vector<int>&dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=fun(n-1,dp)+fun(n-2,dp);
}

int main(){
    int n=4;
    vector<int>dp(n+1,-1);
    int sum=fun(n,dp);
    cout<<sum;
    return 0;
}