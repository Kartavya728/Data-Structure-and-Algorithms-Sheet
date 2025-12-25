// Second Largest Element in an Array without sorting

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<v.size();i++){
        cin>>n;
        v[i]=n;
    }
    int smlest=INT_MAX,sml=INT_MAX,lgest=INT_MIN,lg=INT_MIN;
    for(auto i:v){
        cout<<i<<",";
        if(i>lg){
            
            if(i>lgest){
                lg=lgest;
                lgest=i;
            }
            else lg=i;
        }
        if(i<sml){
            if(i<smlest){
                sml=smlest;
                smlest=i;
            }
            else sml=i;
        }
    }
    cout<<"\nsecond smallest : "<<sml<<"\n";
    cout<<"second largest : "<<lg<<"\n";
    return 0;
}