#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int n=s.length();
        map<char,int>mpp;
        int maxlen=0;
        for(int i=0;i<n;i++){
            mpp.clear();
            for(int j=i;j<n;j++){
                mpp[s[j]]++;
                if(mpp.size()<=k){
                    maxlen=max(maxlen,j-i+1);
                }
                else{
                    break;
                }
            }
        }
        return maxlen;
        
    }
};

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int n=s.length();
        int maxlen=0;
        int l=0;
        int r=0;
        map<char,int>mpp;
        while(r<n){
            mpp[s[r]]++;
            while(mpp.size()>k){
                mpp[s[l]]--;
                if(mpp[s[l]]==0){
                    mpp.erase(s[l]);
                }
                l++;
            }
            if(mpp.size()<=k){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
        
    }
};


int main(){


    return 0;
}