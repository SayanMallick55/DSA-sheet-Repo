#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node* middle(struct node *head){
    struct node * slow;
    struct node *fast;
    slow=fast=head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main(){

}