// 3-Sum Problem
// link-https://leetcode.com/problems/3sum/submissions/1867748594/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int j,k,s,pj,pk;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            j=i+1;
            k=nums.size()-1;
            while(j<k){
                s=nums[j]+nums[k]+nums[i];
                if(s<0){
                    pj=j;
                    while(k>j && nums[j]==nums[pj])j++;
                }
                else if(s>0){
                    pk=k;
                    while(k>j && nums[pk]==nums[k])k--;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    pj=j;
                    pk=k;
                    while(k>j && nums[j]==nums[pj])j++;
                    while(k>j && nums[pk]==nums[k])k--;
                }
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}