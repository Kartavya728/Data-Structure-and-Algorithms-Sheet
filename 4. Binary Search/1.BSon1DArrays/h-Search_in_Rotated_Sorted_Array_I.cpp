// Search in Rotated Sorted Array I

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int high=arr.size()-1,low=0,mid;
        while(high>low){
            mid=(high+low)/2;
            if(arr[mid]<arr[high])high=mid;
            else low=mid+1;
        }
        return low;
    }
};

