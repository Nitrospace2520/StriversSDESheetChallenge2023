#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int i,j;
    // vector<int> res;
    for(i=n-2; i>=0; i--){
        if(permutation[i+1]>permutation[i])
            break;
    }
    if(i<0){
        reverse(permutation.begin(), permutation.end());
    }else{

        for(j=n-1; j>i; j--){
            if(permutation[j]>permutation[i]){
                break;
            }
        }
        std::swap(permutation[i], permutation[j]);
        reverse(permutation.begin()+i+1, permutation.end());
    }
    return permutation;
}