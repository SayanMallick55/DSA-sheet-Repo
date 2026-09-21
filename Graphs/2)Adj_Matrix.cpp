#include <bits/stdc++.h>
using namespace std;



int main(){
    int n; // Vertices
    cin>>n;
    int m; // Edges
    cin>>m;

    

    int adj[n][n]={0};
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}