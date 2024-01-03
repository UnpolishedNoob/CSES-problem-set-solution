/*
problem link : https://cses.fi/problemset/task/1621
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    set<int>s;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    cout<<s.size()<<endl;
    return 0;
}
