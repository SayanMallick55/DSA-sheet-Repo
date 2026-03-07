#include <bits/stdc++.h>
using namespace std;

int MaxPoints(vector<int> &arr , int k){
    int size = arr.size();
    int sum=0;
    for(int i=0;i<k;i++){
        sum=sum+arr[i];
    }
    int r=k-1;
    int l=0;
    int maxsum=sum;
    while(r<size-1){
        sum=sum-arr[l];
        l++;
        r++;
        sum=sum+arr[r];
        maxsum=max(maxsum,sum);
    }
    return maxsum;
}

// Leetcode Problem : From begening or end 
int MaxPoints(vector<int> &arr , int k){
    int lsum=0;
    int rsum=0;
    int n=arr.size();
    for(int i=0;i<k;i++){
        lsum=lsum+arr[i];
    }
    int maxsum=lsum;
    int r=n-1;
    for(int i=k-1;i>=0;i--){
        lsum=lsum-arr[i];
        rsum=rsum+arr[r];
        r--;
        maxsum=max(maxsum,lsum+rsum);
    }
    return maxsum;

}


int main(){


    return 0;
}