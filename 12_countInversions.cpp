#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long res=0;
    for (int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                res++;
            }
        }
    }
    return res;
}