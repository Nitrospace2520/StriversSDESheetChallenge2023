#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	/* // Using Libarary Function:- 
	sort(arr.begin(), arr.end());
	for(int i=1; i<n; i++){
		if(arr[i] == arr[i-1])
			return arr[i];
	}
	return -1;
	*/
	bool *flag = new bool[n];
	fill(flag, flag+n, false);
	for(int i=0; i<n; i++){
		if(flag[arr[i]] == true)
			return arr[i];
		else{
			flag[arr[i]] = true;
		}
	}
	delete[] flag;
	return -1;
}
