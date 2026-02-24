#include<bits/stdc++.h>
using namespace std ;

//Brute Force : 
vector<int>leader(vector<int>&a){
    int n = a.size();
    vector<int>ans ;
    for(int i = 0 ;i<n;i++){
        bool leader = true ;
        for(int j = i+1 ; j<n;j++){
            if(a[j]>a[i]){
                leader = false;
                break;
            }
            
        }
        if(leader==true){
            ans.push_back(a[i]);
        }
    }
    return ans;
}

//OPTIMAL :
vector<int>leader(vector<int>&a){
    vector<int>ans;
    int n = a.size();
    int maxi = INT_MIN;
    for(int i = n-1;i>=0;i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        max(maxi,a[i]);
    }

    return ans;
}


int main(){
    
}