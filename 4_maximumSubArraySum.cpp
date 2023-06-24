#include <bits/stdc++.h> 
long findMax(long x, long y){
    if(x>y)
        return x;
    else
        return y;
}
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long ans =arr[0];
    long long res =arr[0];
    for(int i=1; i<n; i++){
        res = findMax((res+arr[i]), (long)(arr[i]));
        ans = findMax(ans, res);
    }
    if(ans < 0)
        return 0;
    return ans;
}
