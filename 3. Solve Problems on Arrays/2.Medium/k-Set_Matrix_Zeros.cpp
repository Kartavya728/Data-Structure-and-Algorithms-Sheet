// Set Matrix Zeros
// Link-https://leetcode.com/problems/set-matrix-zeroes/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool col1=false,row1=false;
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    if(i==0)row1=true;
                    if(j==0)col1=true;
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            if(matrix[i][0]==0){
                for(int j=1;j<m;j++)matrix[i][j]=0;
            }
        }
        for(int j=1;j<m;j++){
            if(matrix[0][j]==0){
                for(int i=1;i<n;i++)matrix[i][j]=0;
            }
        }
        if(row1)for(int j=1;j<m;j++)matrix[0][j]=0;
        if(col1)for(int i=1;i<n;i++)matrix[i][0]=0;
    }
};

int main(){
    
    return 0;
}