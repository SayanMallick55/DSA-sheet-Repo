#include <bits/stdc++.h>
using namespace std;

void fun(int ind,int sum,vector<int>&arr,int n,vector<int>&ds){
    if(ind==n){
        ds.push_back(sum);
        return;
    }
    fun(ind+1,sum+arr[ind],arr,n,ds);
    fun(ind+1,sum,arr,n,ds);
}

vector<int>sub(vector<int>arr,int N){
    vector<int>ds;
    fun(0,0,arr,N,ds);
    sort(ds.begin(),ds.end());
    return ds;
}

int main(){


    return 0;
}