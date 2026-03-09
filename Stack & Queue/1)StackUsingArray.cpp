#include <bits/stdc++.h>
using namespace std;
int top=-1;
const int size=100;
int stack1[size];

void push(int x){
    if(top==size-1){
        cout<<"Over Flow";
    }
    else{
        top++;
        stack1[top]=x;
        
    }
}

void pop(){
    if(top==-1){
        cout<<"Underflow";
    }
    else {
        int popElement=stack1[top];
        top--;
    }
}

void peek(){
    if(top==-1){
        cout<<"Underflow";
    }
    else{
        cout<<stack1[top];
    }
    
}

void display(){
    if(top==-1){
        cout<<"Underflow";
    }else{
        for(int i=top;i>-1;i++){
            cout<<stack1[i];
           
        }
    }
    
}


int main(){

    return 0;
}