
#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0 ;i<nums.size();i++){
            for(int j = 0 ;j<nums.size();j++){
                if(i==j){
                    continue;
                }
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

// OPTIMAL 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int first = nums[i];
            int more = target - first ;
            if(mpp.find(more)!=mpp.end()){
                return{mpp[more],i};
            }
            mpp[first]=i;
        }
        return{};
    }
};