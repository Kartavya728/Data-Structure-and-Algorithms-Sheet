// Armstrong Numbers
//edge case - 548834-true
#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    if(n<0)return false;
    if(n==0)return true;
    int c=n;
    long long psum=0;
    int p=(int)(log10(n)+1);
    for(int i=0;i<p;i++){
        long long  pow=1;
        for(int j=0;j<p;j++)pow*=(n%10);
        if(psum<INT_MAX-pow)psum+=pow;
        n/=10;
    }
    cout<<psum<<"\n";
    if(c==psum)return true;
    return false;
}

int main(){
    int n;
    cin>>n;
    cout<<armstrong(n);
    return 0;
}