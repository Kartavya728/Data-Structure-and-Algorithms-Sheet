// Left rotate an array by D places


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
    int D=3;
    rotate(arr,D);
    for(auto i:arr)cout<<i<<",";
    return 0;
}