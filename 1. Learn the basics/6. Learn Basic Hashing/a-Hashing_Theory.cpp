// Hashing Theory - Precomputaional technique - Pre-stroring+fetching
//multiple query asking - hint
#include <bits/stdc++.h>
using namespace std;
const int N=1e6+10; 
int Hash[N];

int main(){
    int arr[10]={2,3,1,2,3,6,44,6,8,5};
    for(auto i:arr)Hash[i]+=1;
    cout<<Hash[2];
    cout<<Hash[44];
    return 0;
}