/*
Problem link:https://cses.fi/problemset/task/1070
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n, mid;
    cin >> n;
    mid = (n + 1) / 2;
    if (n != 1 && n < 4)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (int i = 1; i < mid; i++)
        {
            cout << 2 * i << " ";
        }
        if (n % 2 == 0)
        {
            cout << mid * 2 << " ";
        }
        for (int i = 1; i <= mid; i++)
        {
            cout << 2 * i - 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
