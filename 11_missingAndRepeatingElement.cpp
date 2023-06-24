#include <bits/stdc++.h>
using namespace std;
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int *flag = new int[n];
	fill(flag,flag+n, 0);
	int r=-1, m=-1;
	for(int i=0; i<n; i++){
		flag[arr[i] -1]++;
		if(flag[arr[i] -1] > 1){
			r = arr[i] ;
			// break;
		}
	}
	for(int i=0; i<n; i++){
		if(flag[i] == 0){
			m = i +1;
			break;
		}
	}
	pair<int, int> ans = {m, r};
	delete[] flag;
	return ans;
}
