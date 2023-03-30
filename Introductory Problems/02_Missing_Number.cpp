#include<bits/stdc++.h>
using namespace std;
#define ll long long

// https://cses.fi/problemset/task/1083

// Missing Number

// You are given all numbers between 1,2,…,n except one. 
// Your task is to find the missing number.

int main(){
    ll n,k,sum=0;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>k;
        sum+=k;
    }
    cout<<((n*(n+1))/2)-sum;
    return 0;
}