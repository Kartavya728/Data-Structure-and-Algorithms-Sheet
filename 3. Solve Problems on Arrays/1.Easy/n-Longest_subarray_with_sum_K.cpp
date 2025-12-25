// Longest subarray with sum K (Positives + Negatives)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={12,-2,-3,4,5,1,9,0,0,0};
    int k,len=-1,sum=0;
    map<int,int> mp;
    cin>>k;
    for(int i=0;i<10;i++){
        sum+=arr[i];
        if(sum==k){
            cout<<"sum from start to "<<i<<"is correct \n";
            len=max(len,i+1);
        }
        if(mp.find(sum-k)!=mp.end()){
            cout<<"sum found at start : "<<mp[sum-k]+1<<" and end at : "<<i<<" with sum = "<<sum<<"\n";
            len=max(len,i-mp[sum-k]);
        }
        if(mp.find(sum)== mp.end())mp[sum]=i;
    }
    cout<<len;
    return 0;
}