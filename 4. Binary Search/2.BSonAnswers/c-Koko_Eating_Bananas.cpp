// Koko Eating Bananas

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hrs(vector<int>& piles,int k){
        int sum=0;
        for(auto i:piles){
            sum+=(i+k-1)/k;
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=*max_element(piles.begin(),piles.end()),low=1,mid;
        while(high>low){
            mid=(high+low)/2;
            if(hrs(piles,mid)>h)low=mid+1;
            else high=mid;
        }
        mid=(high+low)/2;
        return mid;
    }
};