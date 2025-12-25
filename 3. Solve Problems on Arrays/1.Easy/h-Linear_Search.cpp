// Linear Search

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[12]={2,4,3,1,3,2,1,44,22,11,42,67};
    int k;
    cin>>k;
    int ans=-1;
    for(int i=0;i<12;i++)if(arr[i]==k)ans=i;
    cout<<ans;
    return 0;
}