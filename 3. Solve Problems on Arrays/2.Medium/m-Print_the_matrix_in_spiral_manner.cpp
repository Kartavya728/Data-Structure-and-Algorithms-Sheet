// Print the matrix in spiral manner

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<int> ans;
        int top=0,bot=n-1,lft=0,rgt=m-1;
        while(top<=bot && lft<=rgt){
            for(int i=lft;i<=rgt;i++)ans.push_back(matrix[top][i]);
            top++;
            for(int i=top;i<=bot;i++)ans.push_back(matrix[i][rgt]);
            rgt--;
            if(top<=bot)for(int i=rgt;i>=lft;i--)ans.push_back(matrix[bot][i]);
            bot--;
            if(lft<=rgt)for(int i=bot;i>=top;i--)ans.push_back(matrix[i][lft]);
            lft++;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}