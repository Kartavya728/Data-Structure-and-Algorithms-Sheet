// Longest Consecutive Sequence in an Array

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={10, 22, 12, 13, 0, 6,5,4,66,443,7,793,8,2,11,5,6,2,9,12};
    int n=v.size();
    unordered_set<int> s;
    for(auto i:v)s.insert(i);
    int cnt=0,mxcnt=1;
    for(auto i:s){
        if(s.find(i-1)==s.end()){
            cnt=1;
            while(s.find(i+cnt)!=s.end())cnt++;
            mxcnt=max(mxcnt,cnt);
        }
    }
    cout<<mxcnt;
    return 0;
}