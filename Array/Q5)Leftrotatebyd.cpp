#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int d = 3;
    int i ;
    int temp[d];
    int a=0;
    for(int j=0;j<d;j++){
        temp[a]=arr[j];
        a++;
    }
    for(i=d;i<6;i++){
        arr[i]=arr[i+1];
    }
    int j=0;
    for(int k = 6-d;k<6;k++){
        arr[k]=temp[j];
        j++;
    }

    for(j =0;j<6;j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}

