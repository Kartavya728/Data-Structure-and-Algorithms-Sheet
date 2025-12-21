// Count Digits

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"enter the integer : ";
    cin>>s;
    cout<<"my approach : "<<s.size();
    cout<<"\noptima approach : "<<(int)(log10(stoi(s))+1);
    return 0;
}