// Print name N times using recursion

#include <bits/stdc++.h>
using namespace std;

string name[2]={"kartavya","ChatGPT"};

void recur(int n,int i){
    if(n==0)return;
    else{
        cout<<name[i]<<"\n";
        recur(n-1,!i);
    }
}

int main(){
    int n;
    cin>>n;
    recur(n,0);
    return 0;
}