// GCD or HCF
//Eucid's Algo-the GCD of two numbers remains the same even if the smaller number is subtracted from the larger number
//GCD of (N,N) is N and (N,0) is N
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<gcd(n1,n2);
    return 0;
}