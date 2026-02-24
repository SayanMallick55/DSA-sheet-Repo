
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int prime = 1;
    if (n == 2)
    {
        prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    if (prime == 0)
    {
        cout << "Not Prime";
    }
    else
    {
        cout << "Prime";
    }
}