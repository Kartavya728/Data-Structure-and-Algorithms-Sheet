// Leaders in an Array problem
//problem not shown on the site but the idea of the problem is to print the elements which are greater then all the elements in it right
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={10, 22, 12, 3, 0, 6};
    int n=v.size();
    vector<int> ans;
    int mxval=v[n-1];
    ans.push_back(v[n-1]);
    for(int i=n-2;i>=0;i--){
        if(v[i]>mxval){
            ans.push_back(v[i]);
            mxval=v[i];
        }
    }
    reverse(ans.begin(),ans.end());
    for(auto i:ans)cout<<i<<",";
    return 0;
}