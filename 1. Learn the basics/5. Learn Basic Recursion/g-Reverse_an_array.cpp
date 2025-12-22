// Reverse an array

#include <bits/stdc++.h>
using namespace std;

void rearr(int arr[],int n){
    reverse(arr,arr+n);
}

int main(){
    int a[5]={5,4,3,2,1};
    rearr(a,5);
    for(auto i:a)cout<<i<<",";
    return 0;
}