#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int row = mat.size();
    int col = mat[0].size();
    if(target>mat[row-1][col-1] || target<mat[0][0]){
        return false;
    }
    int r=0, c=col-1;
    while(r<row && c>=0){
        if(mat[r][c] == target)
            return true;
        else if (mat[r][c] < target){
            r++;
        }else{
            c--;
        }
    }
    return false;
}