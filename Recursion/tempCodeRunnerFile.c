#include<stdio.h>

void fun(int n){
    if(n<0){
        return ;
    }
    printf("%d",n);
    fun(n-1);
}

int main(){
    int n ;
    printf("Enter number : ");
    scanf("%d",&n);
    fun(n);
    return 0;
}
