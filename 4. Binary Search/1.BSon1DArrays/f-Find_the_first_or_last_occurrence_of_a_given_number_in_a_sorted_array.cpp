// Find the first or last occurrence of a given number in a sorted array
//link-https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/1875757367/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        int first = -1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (target == nums[m]) first = m;
            if (target <= nums[m]) {
                r = m - 1;
            } else l = m + 1;
        }
        l = 0;
        r = n - 1;
        int last = -1;

        while (l <= r) {
            int m = l + (r - l) / 2;
            if (target == nums[m]) last = m;
            if (target >= nums[m]) {
                l = m + 1;
            } else r = m - 1;
        }

        return vector<int> {first, last};

    }
};

int main(){
    
    return 0;
}
