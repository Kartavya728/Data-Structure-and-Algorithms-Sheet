// Majority Element (n/3 times)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=1,cnt2=0,el1=nums[0],el2,n=nums.size();
        for(int i=1;i<n;i++){
            if(cnt2==0 && el1!=nums[i]){
                cnt2=1;
                el2=nums[i];
            }
            else if(cnt1==0 && el2!=nums[i]){
                cnt1=1;
                el1=nums[i];
            }
            else if(el1==nums[i])cnt1++;
            else if(el2==nums[i])cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int> v;
        cnt1=0;cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el1)cnt1++;
            if(nums[i]==el2)cnt2++;
        }
        cout<<"n="<<n<<" , el1="<<el1<<"("<<cnt1<<") , el2="<<el2<<"("<<cnt2<<")";
        if(cnt1>(n/3))v.push_back(el1);
        if(cnt2>(n/3))v.push_back(el2);
        return v;
    }
};

int main(){
    
    return 0;
}