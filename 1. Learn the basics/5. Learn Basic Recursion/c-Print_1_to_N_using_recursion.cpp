// Print 1 to N using recursion

#include <bits/stdc++.h>
using namespace std;

void recur(int n,int i){  // Normal recursion with 2 params
    if(n==i)return;
    else{
        cout<<i+1<<"\n";
        recur(n,i+1);
    }
}

void recur(int n){        // Recursion with Backtracking Approach
    if(n==0)return;
    else recur(n-1);
    cout<<n<<"\n";
}

int main(){
    int n;
    cin>>n;
    recur(n);
    return 0;
}