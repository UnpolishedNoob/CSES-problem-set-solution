/*
Problem link:https://cses.fi/problemset/task/1094
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, total = 0;
    cin >> n;
    vector<ll> vec;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
        if ((i > 0) && (vec[i - 1] > vec[i]))
        {
            total += (vec[i - 1] - vec[i]);
            vec[i] = vec[i - 1];
        }
    }
    cout << total << endl;
    return 0;
}
