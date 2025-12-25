// Maximum Consecutive Ones
//link - https://leetcode.com/problems/max-consecutive-ones/
#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxc=0,c=0;
    for(auto i:nums){
        if(i==0){
            maxc=max(maxc,c);
            c=-1;
        }
        c++;
    }
    maxc=max(maxc,c);
    return maxc;
}
int main(){
    
    return 0;
}