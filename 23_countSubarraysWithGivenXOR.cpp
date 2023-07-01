#include <bits/stdc++.h>
using namespace std;
int subarraysXor(vector<int> &arr, int x)
{
    int count = 0;
    for(int i=0; i<arr.size(); i++){
        int t = 0;
        for(int j=i; j<arr.size(); j++){
            t = t^arr[j];
            if(t == x)
                count++;
        }
    }
    return count;
}