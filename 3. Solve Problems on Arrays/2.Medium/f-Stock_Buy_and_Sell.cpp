// Stock Buy and Sell
//link-https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minprc=INT_MAX,mxprft=0;
    for(int i=0;i<prices.size();i++){
        if(mxprft<(prices[i]-minprc))mxprft=(prices[i]-minprc);
        if(minprc>prices[i])minprc=prices[i];
    }
    return mxprft;
}

int main(){
    
    return 0;
}