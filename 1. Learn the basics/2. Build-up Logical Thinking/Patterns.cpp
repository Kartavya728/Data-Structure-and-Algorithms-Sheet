// Patterns

#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the value of n(default 5): ";
    int n=5;
    // cin>>n;
    cout<<"pattern 1 : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cout<<'*';
        cout<<"\n";
    }
    cout<<"pattern 2 : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++)cout<<'*';
        cout<<"\n";
    }
    cout<<"pattern 3 : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++)cout<<j+1;
        cout<<"\n";
    }
    cout<<"pattern 4 : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++)cout<<i+1;
        cout<<"\n";
    }
    cout<<"pattern 5 : \n";
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--)cout<<"*";
        cout<<"\n";
    }
    cout<<"pattern 6 : \n";
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--)cout<<n+1-j;
        cout<<"\n";
    }
    cout<<"pattern 7 : \n";
    for(int i=0;i<n;i++){
        for(int k=n;k>i+1;k--)cout<<" ";
        for(int j=0;j<2*i+1;j++)cout<<"*";
        cout<<"\n";
    }
    cout<<"pattern 8 : \n";
    for(int i=n-1;i>-1;i--){
        for(int k=n;k>i+1;k--)cout<<" ";
        for(int j=0;j<2*i+1;j++)cout<<"*";
        cout<<"\n";
    }
    cout<<"pattern 9 : \n";
    for(int i=0;i<n;i++){
        for(int k=n;k>i+1;k--)cout<<" ";
        for(int j=0;j<2*i+1;j++)cout<<"*";
        cout<<"\n";
    }
    for(int i=n-1;i>-1;i--){
        for(int k=n;k>i+1;k--)cout<<" ";
        for(int j=0;j<2*i+1;j++)cout<<"*";
        cout<<"\n";
    }
    cout<<"pattern 10 : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++)cout<<'*';
        cout<<"\n";
    }
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--)cout<<"*";
        cout<<"\n";
    }
    cout<<"pattern 11 : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++)cout<<(j+1)%2;
        cout<<"\n";
    }
    cout<<"pattern 12 : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)cout<<j+1;
        for(int k=n;k>i+1;k--)cout<<" ";
        for(int k=n;k>i+1;k--)cout<<" ";
        for(int j=0;j<i;j++)cout<<j+1;
        cout<<"\n";
    }
    cout<<"pattern 13 : \n";
    int nn=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<nn;
            nn+=1;
        }
        cout<<"\n";
    }
    cout<<"pattern 14 : \n";
    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<s[j];
        }
        cout<<"\n";
    }
    cout<<"pattern 15 : \n";
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<s[n-j];
        }
        cout<<"\n";
    }
    cout<<"pattern 16 : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<s[i];
        }
        cout<<"\n";
    }
    cout<<"pattern 17 : \n";
    for(int i=0;i<n;i++){
        for(int k=n;k>i+1;k--)cout<<" ";
        for(int j=0;j<i+1;j++){
            cout<<s[j];
        }
        for(int j=i-1;j>=0;j--){
            cout<<s[j];
        }
        cout<<"\n";
    }
    cout<<"pattern 18 : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<s[n-1-j];
        }
        cout<<"\n";
    }
    cout<<"pattern 19 : \n";
    for(int i=0;i<n;i++){
        for(int s=0;s<n-i;s++)cout<<"*";
        for(int mid=0;mid<i;mid++)cout<<"  ";
        for(int e=0;e<n-i;e++)cout<<"*";
        cout<<"\n";
    }
    for(int i=n-1;i>-1;i--){
        for(int s=0;s<n-i;s++)cout<<"*";
        for(int mid=0;mid<i;mid++)cout<<"  ";
        for(int e=0;e<n-i;e++)cout<<"*";
        cout<<"\n";
    }
    cout<<"pattern 21 : \n";
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--)cout<<n+1-j;
        cout<<"\n";
    }
    cout<<"pattern 21 : \n";
    for(int i=0;i<n-1;i++){
        if(i==0 || i==n-2)for(int j=0;j<n-1;j++)cout<<"*";
        else{
            cout<<"*";
            for(int j=0;j<n-3;j++)cout<<" ";
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"pattern 22 : \n";
    int k=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            k=min(i,j);
            cout<<n-1-k;
        }
        for(int j=n-3;j>-1;j--){
            k=min(i,j);
            cout<<n-1-k;
        }
        cout<<"\n";
    }
    for(int i=n-1;i>-1;i--){
        for(int j=0;j<n-1;j++){
            k=min(i,j);
            cout<<n-1-k;
        }
        for(int j=n-3;j>-1;j--){
            k=min(i,j);
            cout<<n-1-k;
        }
        cout<<"\n";
    }
    return 0;
}