#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i =0 ;i<nums.size();i++){
            if(nums[i]==0){
                cnt0++;
            }
            else if(nums[i]==1){
                cnt1++;
            }
            else if(nums[i]==2){
                cnt2++;
            }
        }
        int j = 0;
        while(j<cnt0){
            nums[j] = 0 ;
            j++;
        }
        
        while(j<(cnt0+cnt1)){
            nums[j] = 1 ;
            j++;
        }
        while(j<cnt0+cnt1+cnt2){
            nums[j] = 2 ;
            j++;
        }
    }
};


// OPTIMAL : Dutch National Flag Algorithm 

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid = 0 ;
        int low = 0 ;
        int high = nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                swap(nums[low],nums[mid]);
                mid++;
            }
            else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
};