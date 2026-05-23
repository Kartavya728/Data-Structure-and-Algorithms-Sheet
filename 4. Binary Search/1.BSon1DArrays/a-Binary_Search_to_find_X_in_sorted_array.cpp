// Binary Search to find X in sorted array
//link-https://leetcode.com/problems/binary-search/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int idx=-1;
        int st=0,ed=nums.size()-1,mid;
        while(st<ed){
            mid=(st+ed)/2;
            if(nums[mid]<target)st=mid+1;
            else if(nums[mid]>target)ed=mid;
            else return mid;
        }
        mid=(st+ed)/2;
        if(nums[mid]==target)return mid;
        return idx;
    }
};

int main(){
    
    return 0;
}
