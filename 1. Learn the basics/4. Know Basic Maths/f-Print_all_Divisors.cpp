// Print all Divisors

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<((int)sqrt(n))+1;i++)if(n%i==0)cout<<i<<" & "<<n/i<<" is the divisor\n";
    return 0;
}