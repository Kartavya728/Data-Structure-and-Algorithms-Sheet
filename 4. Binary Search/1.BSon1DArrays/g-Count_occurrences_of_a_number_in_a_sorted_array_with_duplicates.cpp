// Count occurrences of a number in a sorted array with duplicates

#include <bits/stdc++.h>
using namespace std;


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

int main(){
    vector<int> v={1,2,2,3,4,6,7,88,88,88,88,88,88,88,98,102,105,108,123,125,134,156};
    int k;
    cin>>k;
    vector<int> ans=searchRange(v,k);
    cout<<"number of "<<k<<" total in array are "<<ans[1]-ans[0]+1;
    return 0;
}
