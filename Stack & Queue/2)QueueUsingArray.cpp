#include <bits/stdc++.h>
using namespace std;

const int size = 100;
int Queue1[size];
int currsize = 0;
int start = -1;
int rear = -1;

void push(int x){
    if(currsize==size){
        cout<<"Overflow";
    }
    if(currsize==0){
        start = 0;
        rear = 0;
    }
    else{
        rear=(rear+1)%size;
        Queue1[rear]=x;
        currsize++ ;
    }
}

void pop(){
    if(currsize==0){
        "UnderFlow";
    }
    int el=Queue1[start];
    if(currsize==1){
        start=rear=-1;
    }
    else{
        start=(start+1)%size;
        
    }
}

int main()
{

    return 0;
}