// Print N to 1 using recursion

#include <bits/stdc++.h>
using namespace std;

void recur(int n){      
    if(n==0)return;
    else{
        cout<<n<<"\n";
        recur(n-1);
    } 
    
}

int main(){
    int n;
    cin>>n;
    recur(n);
    return 0;
}