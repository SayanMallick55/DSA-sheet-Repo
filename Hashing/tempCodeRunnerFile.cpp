#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,1,1,4,7,7,9,8,100,9};
    map<int,int>mpp;
    for(int i =0 ;i<10;i++){
        mpp[arr[i]]++;
    }
    cout<<mpp[1];
}