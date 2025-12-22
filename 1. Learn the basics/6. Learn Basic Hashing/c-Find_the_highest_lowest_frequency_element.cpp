// Find the highest/lowest frequency element

#include <bits/stdc++.h>
using namespace std;
int maxFrequency(vector<int>& nums, long long k) {
        sort(nums.begin(), nums.end());
        long long l=0,r=0,ans=1,sum=0;
        for (r = 0; r < nums.size(); r++) {
            sum+=nums[r];
            while((long long)nums[r]*(r-l+1)-sum>k) {
                sum-= nums[l];
                l++;
            }
            ans = max(ans,r-l+1);
        }
        return ans;
    }
int main(){
    vector<int> arr={2,3,1,2,3,6,44,6,8,5};
    int k=4;
    cout<<maxFrequency(arr,5);
    return 0;
}