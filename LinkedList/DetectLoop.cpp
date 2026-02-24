#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

bool LoopDetect(struct node *head){
    struct node * slow;
    struct node *fast;
    slow=fast=head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
    
}

int main(){

}