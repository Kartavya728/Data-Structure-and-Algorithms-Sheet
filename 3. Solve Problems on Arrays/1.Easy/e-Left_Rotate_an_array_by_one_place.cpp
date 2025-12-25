// Left Rotate an array by one place

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int st=nums[0],n=nums.size();
    k=k%n;
    reverse(nums.begin()+ 0,nums.begin()+ n );
    reverse(nums.begin()+0,nums.begin()+ k);
    reverse(nums.begin()+ k, nums.begin()+n);
}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    int k=3;
    rotate(arr,k);
    for(auto i:arr)cout<<i<<",";
    return 0;
}