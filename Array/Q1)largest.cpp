#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int largest = arr[0];
    for(int i = 1;i<6;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    cout<<largest;

    return 0;
}