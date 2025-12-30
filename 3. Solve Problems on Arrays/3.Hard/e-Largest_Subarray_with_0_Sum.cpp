// Largest Subarray with 0 Sum

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={3,1,5,23,5,-5,34,2,-36,52,11};
    for(int i=1;i<v.size();i++)v[i]+=v[i-1];
    unordered_map<int,int> mp;
    int ps,maxlen=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0)maxlen=max(i+1,maxlen);
        if(mp.find(v[i])!=mp.end())maxlen=max(i-mp[v[i]],maxlen);
        else mp[v[i]]=i;
    }
    cout<<maxlen;
    return 0;
}