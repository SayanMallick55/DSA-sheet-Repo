class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size = nums.size();
        int longest = 0;
        // int count = 1 ;
        for(int i = 0 ; i<size;i++){
            int x = nums[i];
            int count = 1;
            while(ls(nums,x+1,size)==true){
                x = x+1;
                count++;
            }
            longest=max(longest,count);
        }
        return longest ;

    }

    bool ls(vector<int>& nums,int num,int size){
        for(int i = 0 ; i<size;i++){
            if(nums[i]==num){
                return true ;
            }
        }
        return false ;
    }
};



class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size();
        if(size==0){
            return 0 ;
        }
        int longest = 1; 
        int smaller = INT_MIN;
        int cnt = 0;
        for(int i =0 ; i<size ;i++){
            if(nums[i]-1 == smaller){
                cnt++;
                smaller=nums[i];
            }
            else if(nums[i]!=smaller){
                cnt =1;
                smaller = nums[i];
            }
            longest = max(cnt,longest);
        }
        return longest;
    }
};