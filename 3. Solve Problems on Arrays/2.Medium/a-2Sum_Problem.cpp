// 2Sum Problem
//link-https://leetcode.com/problems/two-sum/
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    mp[nums[0]]=0;
    vector<int> v;
    for(int i=1;i<nums.size();i++){
        if(mp.find(target-nums[i])!=mp.end())return {mp[target-nums[i]],i};
        mp[nums[i]]=i;
    }
    return {0,0};        
}

int main(){
    
    return 0;
}