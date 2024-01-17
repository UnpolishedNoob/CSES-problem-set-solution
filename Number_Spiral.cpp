/*
Problem link : https://cses.fi/problemset/task/1071
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> y >> x;
        if (x > y && x % 2 != 0)
        {
            cout << x * x - y + 1 << endl;
        }
        else if (x > y && x % 2 == 0)
        {
            cout << (x - 1) * (x - 1) + y << endl;
        }
        else if (x < y && y % 2 != 0)
        {
            cout << (y - 1) * (y - 1) + x << endl;
        }
        else if (x < y && y % 2 == 0)
        {
            cout << y * y - x + 1 << endl;
        }
        else if (x == y)
        {
            cout << (x - 1) * (x - 1) + y << endl;
        }
    }
    return 0;
}