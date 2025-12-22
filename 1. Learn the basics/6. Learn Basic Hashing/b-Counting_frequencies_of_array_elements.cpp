// Counting frequencies of array elements

#include <bits/stdc++.h>
using namespace std;

int main(){
    char arr[10]={'a','g','f','3','r','4','a','g','a','y'};
    unordered_map<char,int> um;
    for(auto i:arr)um[i]+=1;
    cout<<um['a']<<"\n";
    cout<<um['3']<<"\n";
    return 0;
}