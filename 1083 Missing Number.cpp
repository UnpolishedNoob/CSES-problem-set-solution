/*
Problem link: https://cses.fi/problemset/task/1083
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
long long int n;
cin>>n;
int arr[n]={0};
for(int i=0;i<n-1;i++){
    int a;
    cin>>a;
    arr[a-1]++;
}
for(int i=0;i<n;i++){
    if(arr[i]==0){
        cout<<i+1<<endl;
        break;
    }
}
    return 0;
}
