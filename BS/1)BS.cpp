class Solution {
public:

      
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0 , nums.size()-1);
    }

     int binarySearch(vector<int>& nums, int target,int low,int high){
         if(low>high){
            return -1;
        }
        int mid=(low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            return binarySearch(nums, target,mid+1,high);
        }
        else{
            return binarySearch(nums, target,low,mid-1);
        }
    }

};


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                return mid ;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;;
            }
        }
        return -1;
    }
};