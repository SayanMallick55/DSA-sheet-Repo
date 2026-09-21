
#include <stdio.h>

int fun(int n){
    if(n==1){
        return n;
    }
    return n+fun(n-1);
}

int main() {
    int sum=fun(3);
    printf("%d",sum);

    return 0;
}