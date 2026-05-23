// Floor/Ceil in Sorted Array

#include <bits/stdc++.h>
using namespace std;

int ceil(vector<int>v,int k){
    int st=0,end=v.size()-1,mid;
    while(st<end){
        mid=(st+end)/2;
        if(v[mid]<=k)st=mid+1;
        else end=mid;
    }
    mid=(st+end)/2;
    return mid;
}

int floor(vector<int>v,int k){
        int st=0,end=v.size()-1,mid;
    while(st<end){
        mid=(st+end)/2;
        if(v[mid]<=k)st=mid+1;
        else end=mid;
    }
    mid=(st+end)/2;
    if(v[mid-1]==k)mid-=1;
    return mid-1;
}

int main(){
    vector<int> v={2,4,5,66,67,78,79,90,91,92,94,95,97,102,103,105};
    int k;
    cin>>k;
    cout<<"floor of "<<k<<" is "<<v[floor(v,k)]<<" and ciel is "<<v[ceil(v,k)]<<".";
    return 0;
}
