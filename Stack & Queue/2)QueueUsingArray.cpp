#include <bits/stdc++.h>
using namespace std;

const int size = 100;
int Queue1[size];
int currsize = 0;
int front = -1;
int rear = -1;

void push(int x){
    if(currsize==size){
        cout<<"Overflow";
    }
    if(currsize==0){
        front = 0;
        rear = 0;
        Queue1[rear]=x;
        currsize++;
    }

    else{
        rear=(rear+1)%size;
        Queue1[rear]=x;
        currsize++ ;
    }
}

void pop(){
    if(currsize==0){
        cout<<"UnderFlow";
        return;
    }
    int el=Queue1[front];
    if(currsize==1){
        front=rear=-1;
    }
    else{
        front=(front+1)%size;
        
    }
    currsize--;
}

void peek(){
    if(currsize==0){
        cout<<"Empty";
        return;
    }
    else{
        cout<<Queue1[front];
    }
    
}

// void display(){
//     if(currsize==0){
//         cout<<"Empty";
//     }
//     else{
//         for(int i=front;i<=rear;i++){
//             cout<<Queue1[i];
//         }
//     }
// }

int main()
{

    return 0;
}