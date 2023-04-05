#include<bits/stdc++.h>
using namespace std;
#define ll long long
// https://cses.fi/problemset/task/1635
 
// Coin Combination 1 
 
// Consider a money system consisting of n
// coins. Each coin has a positive integer value.
// Your task is to calculate the number of distinct ways you can produce a money sum x
// using the available coins.
// Print the total number of Permuations


ll coinCombination(ll k,vector<ll>c){
    ll dp[k+1];
    dp[0]=1;
    ll mod=1e9+7;
    for(ll i=1;i<=k;i++){
        dp[i]=0;
        for(ll j=0;j<c.size();j++){
            if((i-c[j])>=0){
                dp[i]+=dp[i-c[j]];
            }
        }
        dp[i]%=mod;
    }
    return dp[k]%(mod);
}
 
int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<coinCombination(k,a);
    return 0;
}