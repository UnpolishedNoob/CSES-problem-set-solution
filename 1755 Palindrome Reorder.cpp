/*
Problem link : https://cses.fi/problemset/task/1755
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int arr[26] = {0}, check = 0, run = 1, odd;
    char c;
    for (int i = 0; i < n; i++)
    {
        arr[s[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % 2 != 0)
        {
            check++;
            odd = i;
        }
        if (check > 1)
        {
            run = 0;
            break;
        }
    }
    if (run)
    {
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] > 0 && i != odd)
            {
                for (int j = 0; j < arr[i] / 2; j++)
                {
                    c = i + 'A';
                    cout << c;
                }
                arr[i] /= 2;
            }
        }

        for (int j = 0; j < arr[odd]; j++)
        {
            c = odd + 'A';
            cout << c;
        }

        for (int i = 25; i >= 0; i--)
        {
            if (arr[i] > 0 && i != odd)
            {
                for (int j = 0; j < arr[i]; j++)
                {
                    c = i + 'A';
                    cout << c;
                }
            }
        }
        cout << endl;
    }
    else
    {
        cout << "NO SOLUTION" << endl;
    }
    return 0;
}
