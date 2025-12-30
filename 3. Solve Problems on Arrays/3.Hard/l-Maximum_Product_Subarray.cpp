// Maximum Product Subarray
//link-https://leetcode.com/problems/maximum-product-subarray/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int p=1,mxpre=INT_MIN,mxsuf=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                mxpre=max(mxpre,0);
                p=1;
            }
            else{
                p*=nums[i];
                mxpre=max(mxpre,p);
            }
            cout<<mxpre<<" at i="<<i<<"\n";
        }
        p=1;
        for(int i=nums.size()-1;i>-1;i--){
            if(nums[i]==0)p=1;
            else{
                p*=nums[i];
                mxsuf=max(mxsuf,p);
            }
        }
        return max(mxpre,mxsuf);
    }
};

int main(){
    
    return 0;
}