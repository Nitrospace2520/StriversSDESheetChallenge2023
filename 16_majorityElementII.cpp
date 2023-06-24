#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans;
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    for(auto i: m){
        if(i.second > (n/3)){
            ans.push_back(i.first);
        }
    }
    return ans;
}