// Find missing number in an array
// submit link-https://leetcode.com/problems/missing-number/
#include <bits/stdc++.h>
using namespace std;


int missingNumber(vector<int>& nums) {
    int n=nums.size(),sum=0;
    for(auto i:nums)sum+=i;
    return ((n*(n+1))/2)-sum;
}
//this is the sum approach and we can solve it by using XOR approach also providing same complexity

int main(){
    
    return 0;
}