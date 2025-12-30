// Merge Overlapping Subintervals
//link-https://leetcode.com/problems/merge-intervals/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>intervals[i-1][1])v.push_back(intervals[i-1]);
            else{
                intervals[i][0]=intervals[i-1][0];
                intervals[i][1]=max(intervals[i-1][1],intervals[i][1]);
            }
        }
        v.push_back(intervals[intervals.size()-1]);
        return v;

    }
};

int main(){
    
    return 0;
}