#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void f(int i,int target,vector<int>&ds,vector<int>& candidates,set<vector<int>>&ans){
        if(i==candidates.size()){
            if(target==0){
                ans.insert(ds);
            }
            return;
        }
        if(candidates[i]<=target){
            ds.push_back(candidates[i]);
            f(i+1,target-candidates[i],ds,candidates,ans);
            ds.pop_back();
        }
        f(i+1,target,ds,candidates,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        set<vector<int>>ans;
        vector<vector<int>>ans2;
        f(0,target,ds,candidates,ans);
        for (auto &v : ans){
            ans2.push_back(v);
        }
           

        return ans2;
    }
};


int main(){


    return 0;
}