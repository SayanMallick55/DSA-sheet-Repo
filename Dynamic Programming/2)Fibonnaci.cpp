#include <bits/stdc++.h>
using namespace std;

// Memoization :
int fun(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = fun(n - 1, dp) + fun(n - 2, dp);
}

// Tabulation :

int tab(int n)
{
    if (n <= 1)
    {
        return n;
    }
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

// Better Tabulation :

int bettertab(int n){
    if (n <= 1)
    {
        return n;
    }
    int prev2=0;
    int prev=1;
    for(int i=2;i<=n;i++){
        int curr=prev2+prev;
        prev2=prev;
        prev=curr;
    }
    return prev;
}


int main()
{
    int n = 4;
    vector<int> dp(n + 1, -1);
    int sum = fun(n, dp);
    cout << sum;
    return 0;
}