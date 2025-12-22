// Check for Prime
//given incorrect  problem( Given an integer N, return true if it is a palindrome else return false.) on strive sheet
//sieve algo - O(n log log n)
#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    for(int i=2;i<(int)sqrt(n)+1;i++)if(n%i==0)return 0;
    return 1;
}
int main(){
    int n;
    cin>>n;
    cout<<prime(n);
    return 0;
}