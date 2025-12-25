// Longest subarray with given sum K (positives)
//edge case-{1,2,3,4,5,6,9,0,0,0},k=9->ans=4
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6,9,0,0,0};
    int r=0,l=0,sum=arr[0],k,len=-1;
    cin>>k;
    while(r<10){
        if(sum<k){
            r++;
            sum+=arr[r];
        }
        else if(sum>k){
            l++;
            sum-=arr[l-1];
        }
        else{
            cout<<"found at l="<<l<<"and r="<<r<<"\n";
            if(arr[r+1]==0){
                r++;
                continue;
            }
            len=max(len,r+1-l);
            l++;
            sum-=arr[l-1];
        }
    }
    cout<<len;
    return 0;
}