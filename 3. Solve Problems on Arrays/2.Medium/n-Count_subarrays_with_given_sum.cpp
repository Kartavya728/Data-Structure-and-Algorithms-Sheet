// Count subarrays with given sum
//link-https://leetcode.com/problems/subarray-sum-equals-k/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=1;i<n;i++)nums[i]+=nums[i-1];
        unordered_map<int,int> um;
        int sum,cnt=0;
        for(int i=0;i<n;i++){
            sum=nums[i];
            if(sum==k)cnt++;
            if(um.find(sum-k)!=um.end())cnt+=um[sum-k];
            um[sum]+=1;
        }
        return cnt;
    }
};

int main(){
    
    return 0;
}