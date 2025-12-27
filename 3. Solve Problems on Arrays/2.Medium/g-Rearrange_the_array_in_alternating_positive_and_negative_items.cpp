// Rearrange the array in alternating positive and negative items
//link-https://leetcode.com/problems/rearrange-array-elements-by-sign/
#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int nidx=0,pidx=0;
    vector<int>ans;
    while(ans.size()<nums.size()){
        while(nums[pidx]<0)pidx++;
        ans.push_back(nums[pidx]);
        while(nums[nidx]>0)nidx++;
        ans.push_back(nums[nidx]);
        pidx++;
        nidx++;
    }
    return ans;
}

int main(){
    
    return 0;
}