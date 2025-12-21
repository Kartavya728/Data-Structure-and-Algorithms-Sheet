// C++ STL

#include <bits/stdc++.h>
using namespace std;

int main(){
    // unordered_set in C++ STL
    unordered_set<int> us={1,2,344,3,2,1,3,22,33,43};  //O(1)ATC and O(n)WTC || iterator points to any element when use the begin function and there is no end function
    for(auto i:us)cout<<i<<",";
    cout<<"\nprint complete\n";
    us.insert(90);
    cout<<us.size()<<"\n";
    cout<<*us.begin()<<"\n";
    auto itt = us.begin();   //we can not use ++ or -- operant on iterator here it is only available for vector and deque for other we can use next(begin(),forwarding amount) function
    itt++;
    cout<<*(itt)<<"\n";
    cout<<us.count(2)<<"\n";
    cout<<us.count(1010)<<"\n";
    us.erase(344);
    for(auto i:us)cout<<i<<",";
    cout<<"\nprint complete\n";
    cout<<us.empty()<<"\n";


    // Vector in C++ STL
    vector<char> v(4,'u');
    for(auto i:v)cout<<i<<",";
    cout<<"\nsize : "<<v.size()<<"\n";
    v.insert(v.begin()+2,'d');
    v.pop_back();
    v.push_back('r');
    v.erase(v.end()-2);
    for(auto i:v)cout<<i<<",";
    cout<<"\n front: "<<v.front()<<"\n back: ";
    cout<<v.back()<<"\n";

    // Set in C++ STL
    set<int> s={39,4,12,32,11,1,3,4}; //unqiue + sorted
    for(auto i:s)cout<<i<<','; 
    cout<<"\n"; 
    s.insert(33);
    s.erase(3);
    s.erase(3903);
    for(auto i:s)cout<<i<<','; 
    cout<<"\n";        

    // unordered_multiset in C++ STL
    //--no need use vector instead

    // multiset in C++ STL
    multiset<int> ms ={2,4,3,5,44,3,11,3,11,1};
    for(auto i:ms)cout<<i<<','; 
    cout<<"\n"; 
    ms.erase(11);//erase all the 11 values
    ms.erase(ms.find(3));//erase the first presence of 3
    for(auto i:ms)cout<<i<<','; 
    cout<<"\n"; 
    // unordered_map in C++ STL
    unordered_map<int,char> m={{2,'b'},{3,'q'},{11,'r'}};
    for(auto i:m)cout<<i.first<<":"<<i.second<<"\n";
    m[1112]='w';
    m[2]='q';
    m.erase(11);
    for(auto i:m)cout<<i.first<<":"<<i.second<<"\n";
    cout<<m.count(1112);
    // map in C++ STL



    // unordered_multimap in C++ STL



    // queue in C++ STL



    // stack in C++ STL



    // deque in C++ STL



    // priority_queue in C++ STL



    // multimap in C++ STL




    // list in C++ STL



    // next_permutation in STL




    // __builtin_popcount() in STL




    // sort() in C++ STL



    // min_element() in C++ STL




    // max_element() in C++ STL




    return 0;
}