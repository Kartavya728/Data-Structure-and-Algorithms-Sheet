// Implement Lower Bound

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,4,5,7,8,12,34,45,46,47,56,58,59,61,64,77,553};
    int n=v.size(),t=47;
    int st=0,ed=n-1,mid;
    while(st<ed){
        mid=(st+ed)/2;
        cout<<mid<<" ; "<<v[mid]<<" - ";
        if(v[mid]<t){
            cout<<"less then target "<<t<<"\n";
            st=mid+1;
        }
        else{
            cout<<"greater then target "<<t<<"\n";
            ed=mid;
        }
    }
    cout<<v[mid-1];
    return 0;
}
