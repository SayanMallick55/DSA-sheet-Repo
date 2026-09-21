#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void f(int i,int target,vector<int>ds,vector<int>& candidates,vector<vector<int>>&ans){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[i]<=target){
            ds.push_back(candidates[i]);
            f(i,target-candidates[i],ds,candidates,ans);
            ds.pop_back();
        }
        f(i+1,target,ds,candidates,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        f(0,target,ds,candidates,ans);
        return ans;
    }
};


int main(){


    return 0;
}