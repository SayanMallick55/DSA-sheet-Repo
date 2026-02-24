#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,2,3,3,5,6};
    for(int i =0;i<6;i++){
        int j=i+1;
        if(arr[i]==arr[j]){
            arr[i]=arr[i+1];
            j++;
            return;
        }
    }
    for(int i =0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}


