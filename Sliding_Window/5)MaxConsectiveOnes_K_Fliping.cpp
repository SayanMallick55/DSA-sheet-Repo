#include <bits/stdc++.h>
using namespace std;

int MaxOnes(vector<int> &nums,int k){
    int n=nums.size();
    int maxlen=0;
    for(int i=0;i<n;i++){
        int zeros=0;
        for(int j=i;j<n;j++){
            if(nums[j]==0){
                zeros++;
            }
            if(zeros<=k){
                maxlen=max(maxlen,j-i+1);
            }
            else{
                break;
            }
        }
    }
    return maxlen;
}


// Better :

int MaxOnes(vector<int> &nums,int k){
    int n=nums.size();
    int maxlen=0;
    int r =0;
    int l =0 ;
    int zeros=0;
    while(r<n){
        if(nums[r]==0){
            zeros++;
        }
        while(zeros>k){
            if(nums[l]==0){
                zeros--;
                
            }
            l++;

        }
        if(zeros<=k){
            maxlen=max(maxlen,r-l+1);
        }
        r++;
    }
    return maxlen;

}


int main(){


    return 0;
}