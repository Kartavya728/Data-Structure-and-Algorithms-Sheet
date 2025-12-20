// Functions (Pass by Reference and Value)

#include <bits/stdc++.h>
using namespace std;

void passByValueFunc(int n){
    n=n+1;
};
void passByRefrenceFunc(int& n){
    n=n+1;
};

int main(){
    int k=111;
    cout<<k<<"\n";
    passByValueFunc(k);
    cout<<k<<"\n";
    passByRefrenceFunc(k);
    cout<<k;
    return 0;
}