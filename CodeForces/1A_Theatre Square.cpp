#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a;
    cin>>m;
    cin>>n;
    cin>>a;
    long long x = ceil((double)m/a);
    long long y = ceil((double)n/a);
    cout<<x*y;
    return 0;
}