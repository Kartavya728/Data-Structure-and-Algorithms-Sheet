// Find the Union

#include <bits/stdc++.h>
using namespace std;

int main(){
    int i=0,j=0;
    vector<int> v1;
    vector<int> v2;
    int n,t;
    cin>>n;
    cout<<"enter the elements of 1st array : ";
    for(int i=0;i<n;i++){
        cin>>t;
        v1.push_back(t);
    }
    cout<<"enter the elements of 2nd array : ";
    for(int i=0;i<n;i++){
        cin>>t;
        v2.push_back(t);
    }
    vector<int> ans;
    while(i<n && j<n){
        if(v1[i]<v2[j]){
            if(ans.empty() || ans.back()!=v1[i])ans.push_back(v1[i]);
            i++;
        }
        else{
            if(ans.empty() || ans.back()!=v2[j])ans.push_back(v2[j]);
            j++;            
        }
    }
    for(auto i: ans)cout<<i<<",";

    return 0;
}