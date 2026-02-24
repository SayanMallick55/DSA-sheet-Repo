#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};



int find_Length(struct node * slow,struct node * fast){
    int count=1;
    fast=fast->next;
    while(fast!=slow){
        fast=fast->next;
        count++;
    }
    return count; 
}

int Loop_exists(struct node *head){
    struct node * slow;
    struct node *fast;
    slow=fast=head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return find_Length(slow,fast);
        }
    }
    return 0;
}

int main(){

    return 0;
}