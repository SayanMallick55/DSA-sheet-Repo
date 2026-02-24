#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        void moveZeroes(vector<int> &nums)
        {
            int size = nums.size();
            vector<int> arr(size);
            int x = 0;
            for (int i = 0; i < size; i++)
            {
                if (nums[i] != 0)
                {
                    arr[x] = nums[i];
                    x++;
                }
            }
            nums = arr;
            for (int i = arr.size(); i < size; i++)
            {
                nums[i] = 0;
            }
        }
    };

    return 0;
}


// OPTIMAL :
class Solution {
public:
     void swap(int &a , int &b){
            int temp = a;
            a=b;
            b=temp;
        }
    void moveZeroes(vector<int>& nums) {
        int j = -1 ;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1){
            return;
        }
        for(int i = j+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
     
};