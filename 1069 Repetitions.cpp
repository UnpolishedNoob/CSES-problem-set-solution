/*
Problem link:https://cses.fi/problemset/task/1069
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int high=0,count=0;
    string word;
    cin>>word;
    for(int i=0;i<word.size();i++){
        if(word[i]==word[i-1]){
            count++;
            if(count>high){high=count;}
        }else{
            count=0;
        }
    }
    cout<<high+1<<endl;
}
