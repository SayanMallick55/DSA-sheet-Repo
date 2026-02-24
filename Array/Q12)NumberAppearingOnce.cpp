// Find the no. appearing once while other appears twice : 

#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mpp ;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second == 2){
                return it.first;
            }
        }
    }
};


// OPTIMAL : 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        for(int i = 0; i<nums.size();i++){
            num = num^nums[i];
        }
        return num;
    }
};