#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<i+n;j++){
                int idx=j%n;
                if(nums[idx]>nums[i]){
                    ans[i]=nums[idx];
                    break;
                }
            }
        }
        return ans;
    }
};


class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<= nums[i%n] ){
                st.pop();
            }
            if(i<n){
                if(st.empty()){
                    ans[i]=-1;
                }
                else{
                    ans[i]=st.top();
                }
            }
            st.push(nums[i%n]);
        }
        return ans ;
    }
};


int main(){


    return 0;
}