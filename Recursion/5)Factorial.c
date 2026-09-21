// Online C compiler to run C program online
#include <stdio.h>

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}

int main() {
    int sum=fact(5);
    printf("%d",sum);

    return 0;
}