// Check if a string is palindrome or not

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int i,int n){
    if(i>n/2)return true;
    if(s[i]==s[n-1-i])return isPalindrome(s,i+1,n);
    else return false;
}

int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s,0,s.size());
    return 0;
}