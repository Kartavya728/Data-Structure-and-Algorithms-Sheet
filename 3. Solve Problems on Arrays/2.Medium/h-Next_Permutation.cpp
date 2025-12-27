// Next Permutation
//link-https://leetcode.com/problems/next-permutation/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int bp=n-1;
        while(bp>0 && nums[bp]<=nums[bp-1])bp--;
        if(bp<=0){
            reverse(nums.begin(),nums.end());
            return;
        }
        int crtpt=bp;
        int mdiff=nums[bp]-nums[bp-1],diff;
        for(int i=bp+1;i<n;i++){
            diff=nums[i]-nums[bp-1];
            if(diff>0 && diff<=mdiff){
                mdiff=diff;
                crtpt=i;
            }
        }
        swap(nums[crtpt],nums[bp-1]);
        reverse(nums.begin()+bp,nums.end());
    }
};

int main(){
    
    return 0;
}