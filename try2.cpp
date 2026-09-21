#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T){
        int n,k;
        cin>>n>>k;
        vector<int>nums;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        
        for(int j=0;j<=k;j++){
            int  flag=1;
            int red=j;
            int blue=k-j;

            for(int i=0;i<n;i++){
            if(nums[i]>0){
                red+=nums[i];
                blue-=nums[i];
            }
            else{
                blue-=nums[i];
                red+=nums[i];
            }
            if(red<0 || blue<0){
                flag=0;
                break;
            }
        }
        }
        
        

        T--;
    }

    return 0;
}