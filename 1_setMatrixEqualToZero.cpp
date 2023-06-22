#include <bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	vector<pair<int, int>> zeroInd;
	for(int i=0; i<matrix.size(); i++){
		for(int j=0; j<matrix[i].size(); j++){
			if(matrix[i][j] == 0){
				zeroInd.push_back({i, j});
			}
		}
	}
	for(auto i=0; i<zeroInd.size(); i++){
		for(int j=0; j<matrix.size(); j++){
			matrix[j][zeroInd[i].second] =0;
		}
		for(int j=0; j<matrix[0].size(); j++){
			matrix[zeroInd[i].first][j] =0;
		}
	}
}