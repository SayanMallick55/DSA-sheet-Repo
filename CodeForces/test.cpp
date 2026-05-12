#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<pair<int,int>,string>mpp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int y;
        cin>>y;
        string s;
        cin>>s;
        mpp[{x,y}]=s;
    }
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        cout << mpp[{x, y}] << "\n";
    }
   
        

        
        
        
           
    return 0;
}