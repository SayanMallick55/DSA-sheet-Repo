#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int temp = arr[0];
    int i ;
    for(i=0;i<5;i++){
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
    for(int j =0;j<6;j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}