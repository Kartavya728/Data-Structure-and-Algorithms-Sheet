// Find the number that appears once, and other numbers twice.
//link - https://leetcode.com/problems/single-number/
#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans=0;
    for(auto i:nums)ans^=i;
    return ans;
}

int main(){
    
    return 0;
}