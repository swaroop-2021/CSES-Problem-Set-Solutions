#include<bits/stdc++.h>
using namespace std;

// https://cses.fi/problemset/task/1069

// Repetitions

// You are given a DNA sequence: a string consisting of characters A, C, G, and T.
// Your task is to find the longest repetition in the sequence.
// This is a maximum-length substring containing only one type of character.

int main(){
    string s;
    cin>>s;
    int max_count=1,count=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])
            count++;
        else{
            max_count=max(max_count,count);
            count=1;
        }
    }

    cout<<max(max_count,count);
    return 0;
}