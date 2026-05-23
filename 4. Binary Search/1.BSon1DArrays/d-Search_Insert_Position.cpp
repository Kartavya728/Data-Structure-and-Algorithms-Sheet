// Search Insert Position
//link-https://leetcode.com/problems/search-insert-position/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1,mid;
        while(end>st){
            mid=(st+end)/2;
            cout<<st<<","<<end<<","<<"mid=="<<mid<<"\n";
            if(nums[mid]<target){
                st=mid+1;
            }
            else if(nums[mid]>target){
                end=mid;
            }
            else return mid;
        }
        mid=(st+end)/2;;
        cout<<mid<<"\n";
        if(nums[mid]<target)return mid+1;
        else return mid;
    }
};

int main(){
    
    return 0;
}
