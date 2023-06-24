#include <bits/stdc++.h> 
using namespace std;
void merge(vector<int>& nums, int low, int mid, int high, int& reversePairsCount){
	int j = mid+1;
	for(int i=low; i<=mid; i++){
		while(j<=high && nums[i] > 2*(long long)nums[j]){
			j++;
		}
		reversePairsCount += j-(mid+1);
	}
	int size = high-low+1;
	vector<int> temp(size, 0);
	int left = low, right = mid+1, k=0;
	while(left<=mid && right<=high){
		if(nums[left] < nums[right]){
			temp[k++] = nums[left++];
		}
		else{
			temp[k++] = nums[right++];
		}
	}
	while(left<=mid){
		temp[k++] = nums[left++]; 
	}
	while(right<=high){
		temp[k++] = nums[right++]; 
	}
	int m=0;
	for(int i=low; i<=high; i++){
		nums[i] = temp[m++];
	}
}

void mergeSort(vector<int>& nums, int low, int high, int& reversePairsCount){
	if(low >= high){
		return;
	}
	int mid = (low + high) >> 1;
	mergeSort(nums, low, mid, reversePairsCount);
	mergeSort(nums, mid+1, high, reversePairsCount);
	merge(nums, low, mid, high, reversePairsCount);
}
int reversePairs(vector<int> &arr, int n){
	/*
	//Method: 01 (Time: O(n*n))
	int count=0;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if((long)arr[i] > (long)2*arr[j]){
				count++;
			}
		}
	}
	return count;
	*/

	int reversePairsCount = 0;
    mergeSort(arr, 0, arr.size()-1, reversePairsCount);
    return reversePairsCount;
}