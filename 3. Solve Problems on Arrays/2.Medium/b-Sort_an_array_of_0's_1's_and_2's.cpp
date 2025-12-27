// Sort an array of 0's 1's and 2's
//link-https://leetcode.com/problems/sort-colors/
#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==1)mid++;
        else if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }
}

int main(){
    
    return 0;
}