#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int sum1 = (size*(size+1))/2;
        int sum2 = 0;
        for(int i = 0 ;i<size;i++){
            sum2 = sum2 + nums[i];
        }
        return sum1-sum2;
    }
};