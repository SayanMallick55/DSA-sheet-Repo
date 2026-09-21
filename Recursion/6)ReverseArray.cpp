
#include<bits/stdc++.h>
using namespace std;

void fun(int l,int r,vector<int>&a){
    if(l>r){
        return;
    }
    swap(a[l],a[r]);
    fun(l=l+1,r=r-1,a);
}

int main() {
    vector<int>a={1,2,3,4,5};
    fun(0,4,a);
    for(auto it:a){
        cout<<it<<" ";
    }

    return 0;
}