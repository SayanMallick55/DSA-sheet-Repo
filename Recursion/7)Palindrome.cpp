
#include<bits/stdc++.h>
using namespace std;

bool fun(vector<int>a,int l,int r){
    if(l>r){
        return true;
    }
    if(a[l]!=a[r]){
        return false;
    }
    return fun(a,l+1,r-1);
}

int main() {
    
    
    return 0;
}