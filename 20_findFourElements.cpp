#include <bits/stdc++.h>
using namespace std;
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    if(n<=3)
        return "No";
    for(int i=0; i<n-3; i++){
        for(int j=i+1; j<n-2; j++){
            int k=j+1, l=n-1;
            while(k<l){
                if(target == (arr[i] + arr[j] + arr[k] + arr[l]))
                    return "Yes";
                else if(target > (arr[i] + arr[j] + arr[k] + arr[l]))
                    k = k +1;
                else
                    l = l -1;
            }
        }
    }
    return "No";
}
