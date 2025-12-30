// 4-Sum Problem
//link-
//same approach as last one just one extra loop added for 1 more variable
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int j,k,s,pj,pk;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int p=0;p<nums.size();p++){
            if(p>0 && nums[p]==nums[p-1])continue;
            cout<<"next iteration \n";
            for(int i=p+1;i<nums.size();i++){
                if(i>p+1 && nums[i]==nums[i-1])continue;
                j=i+1;
                k=nums.size()-1;
                while(j<k){
                    cout<<"loop at p="<<p<<" , i="<<i<<" with j="<<j<<" , k="<<k<<"\n";
                    s=nums[p]+nums[j]+nums[k]+nums[i];
                    if(s<target){
                        pj=j;
                        while(k>j && nums[j]==nums[pj])j++;
                    }
                    else if(s>target){
                        pk=k;
                        while(k>j && nums[pk]==nums[k])k--;
                    }
                    else{
                        cout<<"got output for above case \n";
                        ans.push_back({nums[p],nums[i],nums[j],nums[k]});
                        pj=j;
                        pk=k;
                        while(k>j && nums[j]==nums[pj])j++;
                        while(k>j && nums[pk]==nums[k])k--;
                    }
                }
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}