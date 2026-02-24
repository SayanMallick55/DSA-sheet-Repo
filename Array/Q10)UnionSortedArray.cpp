#include<bits/stdc++.h>
using namespace std ;


class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        set<int>st;
        for(int i = 0; i<a.size();i++){
            st.insert(a[i]);
        }
        for(int i = 0; i<b.size();i++){
            st.insert(b[i]);
        }
        vector<int>uni(st.size());
        int i =0;
        for(auto it : st ){
            uni[i++]=it;
        }
        return uni;
        
    }
};

// OPTIMAL :

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int>uni;
        int n1 = a.size();
        int n2 = b.size();
        int i = 0 ;
        int j = 0;
        while(i < n1 && j < n2){
            if(a[i]<=b[j]){
                if(uni.size()==0 || (uni.back()!=a[i])){
                    uni.push_back(a[i]);
                }
                i++;
            }
            else{
                if(uni.size()==0 || (uni.back()!=b[j])){
                    uni.push_back(b[j]);
                }
                j++;
            }
        }
        while(j<n2){
            if(uni.size()==0 || (uni.back()!=b[j])){
                    uni.push_back(b[j]);
                }
            j++;
        }
        while(i<n1){
            if(uni.size()==0 || (uni.back()!=a[i])){
                    uni.push_back(a[i]);
                }
            i++;
        }
        return uni;
        
    }
};