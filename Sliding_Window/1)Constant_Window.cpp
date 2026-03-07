#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int l =0;
        
        int r = k-1;
        int sum = 0;
        for(int i=l;i<=r;i++){
            sum=sum+arr[i];
        }
        int maxsum=0;
        while(r<arr.size()-1){
            sum=sum-arr[l];
            l++;
            r++;
            sum=sum+arr[r];
            maxsum=max(maxsum,sum);
        }
        return maxsum;
        
    }
};


int main(){


    return 0;
}

