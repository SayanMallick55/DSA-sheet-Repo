#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        void rotate(vector<int> &nums, int k)
        {
            int size = nums.size();
            int d = k % size;
            vector<int> arr(d);
            int x = 0;
            for (int i = size - 1; i >= size - d; i--)
            {

                arr[x] = nums[i];
                x++;
            }

            for (int i = size - 1 - d; i >= 0; i--)
            {
                nums[i + d] = nums[i];
            }

            // int y = 0;
            for (int i = 0; i < d; i++)
            {
                nums[i] = arr[x - 1];
                x--;
            }
        }
    };

    return 0;
}


// OPTIMAL 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        int d = k%size;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+d);
        reverse(nums.begin()+d,nums.end());
    }
};