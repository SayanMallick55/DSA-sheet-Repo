#include <bits/stdc++.h>
using namespace std;

class Solution {


public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);
        queue<int>q;
        q.push(0);
        color[0]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:graph[node]){
                if(color[it]==-1){
                    color[it]=!color[node];
                }
                else if(color[it]==color[node]){
                    return false;
                }
            }
            return true;

        }
       
    }
};