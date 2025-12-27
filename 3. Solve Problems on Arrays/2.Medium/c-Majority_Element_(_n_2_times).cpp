// Majority Element (>n/2 times)
//link-https://leetcode.com/problems/majority-element/
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
         int cnt=1,ele=nums[0];
         for(int i=1;i<nums.size();i++){
            if(nums[i]==ele)cnt++;
            else if(cnt==0){
                ele=nums[i];
                cnt++;
            }
            else cnt--;
         }
         return ele;
}

int main(){
    
    return 0;
}