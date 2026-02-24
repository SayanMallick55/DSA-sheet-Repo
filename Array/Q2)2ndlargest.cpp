#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int largest = arr[0];
    int slargest = INT16_MIN;
    for(int i = 1;i<6;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]> slargest){
            slargest=arr[i];
        }

    }

    cout<<slargest;
}