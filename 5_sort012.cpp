#include <bits/stdc++.h> 
void swap(int *arr, int i, int j){
   int t = arr[i];
   arr[i] = arr[j];
   arr[j] = t;
}
void sort012(int *arr, int n)
{
   int low=0, high=n-1, mid=0;
   while(mid <= high){
      if(arr[mid] == 0){
         swap(arr, low, mid);
         low++;
         mid++;
      } else if (arr[mid] == 1) {
         mid++;
      }
      else{
         swap(arr, high, mid);
         high--;
      }
   }
}
