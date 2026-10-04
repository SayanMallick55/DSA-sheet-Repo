#include <bits/stdc++.h>
using namespace std;

class Solution {
    
    private:
        void dfs(int node,vector<int>& vis,stack<int>& st,vector<vector<int>>& edges){
            vis[node]=1;
            for(auto it:edges[node]){
                if(!vis[it]){
                    dfs(it,vis,st,edges);
                }
                
            }
            st.push(node);
        }
    
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<int>vis(V,0);
        stack<int>st;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,vis,st,edges);
            }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
        
    }
};