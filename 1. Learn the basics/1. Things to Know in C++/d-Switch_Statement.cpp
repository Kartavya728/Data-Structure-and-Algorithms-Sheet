// Switch Statement

#include <bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cout<<"enter the switch case numser 1/2/3/4 : ";
    cin>>s;
    switch(s){
        case 1:
            cout<<"system run case 1 \n";
            break; //if no break statment all the code bellow will run independent of condition if above case is true
        case 2:
            cout<<"system run case 2\n";
        case 3:
            cout<<"system run case 3\n";
        case 4:
            cout<<"system run case 4\n";
        default:
            cout<<"\nthankyou for input, system respond for case "<<s<<".";
        
    }
    return 0;
}