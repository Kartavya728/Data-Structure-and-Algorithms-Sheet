// Reverse a Number
//submition link-
//https://leetcode.com/problems/reverse-integer/description/
#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    bool s=false;
    if(x<0){
        s=true;
        x=-1*x;
    }
    int ans=0;
    while(x>9){
        ans=ans*10+x%10;
        x=x/10;
    }      
    ans=ans*10+x%10;
    if(s)return -1*ans;
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<"\n"<<reverse(n);
    return 0;
}