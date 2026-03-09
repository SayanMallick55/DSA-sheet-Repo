#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=0;
    while(n>0){
        int a ;
        int b;
        int c;
        cin>>a;
        cin>>b;
        cin>>c;
        if((a+b+c)>=2){
            cnt++;
        }
        n--;
    }
    cout<<cnt;
    return 0;
}