#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *StartingCycle(struct ListNode *head) {
    struct ListNode *temp = head ;
    map<struct ListNode *,int>mpp;
    while(temp!=NULL){
        if(mpp.find(temp)!=mpp.end()){
            return temp;
        }
        mpp[temp] = 1;
        temp=temp->next;
    }
    return NULL;
    
}