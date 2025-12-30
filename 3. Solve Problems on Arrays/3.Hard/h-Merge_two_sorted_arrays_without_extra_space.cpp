// Merge two sorted arrays without extra space
//link-https://leetcode.com/problems/merge-sorted-array/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=m-1,i=n-1,k=m+n-1;
        while(k>=0){
            if(j<0){
                nums1[k]=nums2[i];
                i--;
                }
            else if(i<0){
                nums1[k]=nums1[j];
                j--;
            }
            else  if(nums1[j]<nums2[i]){
                nums1[k]=nums2[i];
                i--;
            }
            else if(nums1[j]>=nums2[i]){
                nums1[k]=nums1[j];
                j--;
            }
            k--;
        }
    }
};

int main(){
    
    return 0;
}