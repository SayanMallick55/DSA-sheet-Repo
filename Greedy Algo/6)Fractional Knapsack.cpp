#include <bits/stdc++.h>
using namespace std;


int main(){
    class Solution {
  public:
    
    struct Item{
        int val;
        int wt;
    };
    
    static bool comp(Item a,Item b){
        if((double)a.val/a.wt>(double)b.val/b.wt){
            return true;
        }
        return false;
    }
    
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n=val.size();
        vector<Item>Items;
        for(int i=0;i<n;i++){
            Items.push_back({val[i],wt[i]});
        }
        sort(Items.begin(),Items.end(),comp);
        double ans=0;
        
        for(int i=0;i<n;i++){
            if(capacity>=Items[i].wt){
                ans=ans+Items[i].val;
                capacity=capacity-Items[i].wt;
            }
            else{
                ans=ans+((double)Items[i].val/Items[i].wt)*capacity;
                break;
            }
        }
        return ans;
        
    }
};
}

