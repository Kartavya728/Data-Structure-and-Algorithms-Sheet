// Rotate Matrix by 90 degrees
//link-https://leetcode.com/problems/rotate-image/
#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    for(int i=0;i<matrix.size();i++)for(int j=0;j<i;j++)swap(matrix[i][j],matrix[j][i]);
    for(int j=0;j<matrix.size();j++)reverse(matrix[j].begin(),matrix[j].end());
}
int main(){
    
    return 0;
}