// Move Zeros to end

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j=0,n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            nums[j]=nums[i];
            j+=1;
        }
    }
    for(int i=j;i<n;i++)nums[i]=0;
}

int main(){
    vector<int> v={0,1,2,90909,-9,0,9,9,9,9,9,0,0,0,0,0,0,0,0,-9,-9999,-9,8,8,8,8,8,8,8,8,0,8};
    moveZeroes(v);
    for(auto i:v)cout<<i<<",";
    return 0;
}