#include<stdio.h>

void name(int i , int n){
    if(i>n){
        return;
    }
    printf("Boss \n");
    name(i =i+1,n);
}


int main(){
    int n ;
    printf("Enter the number ");
    scanf("%d",&n);
    name(1,n);

    return 0;
}