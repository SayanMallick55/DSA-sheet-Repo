
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int solve(vector<int>& bt) {
        sort(bt.begin(),bt.end());
        int n=bt.size();
        int wt=0;
        int t=0;
        for(int i=0;i<n;i++){
            wt=wt+t;
            t=t+bt[i];
        }
        return wt/n;
    }
};