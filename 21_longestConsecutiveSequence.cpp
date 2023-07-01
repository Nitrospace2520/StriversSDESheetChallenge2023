#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    /* sort(arr.begin(), arr.end());
    int count = 1;
    int res = 1;
    for(int i=0; i<n-1; i++){
        if((arr[i]+1)==arr[i+1]){
            count++;
        }
        else if(arr[i] == arr[i+1]){
            continue;
        } else {
            count = 1;
        }
            res = max(res, count);
    }
    return res; */


    // Time and Space= O(N)
    if(n<=0)
        return 0;
    if(n==1)
        return 1;
    unordered_set<int> s;
    if(s.size() == 1)
        return 1;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    int count = 1;
    int res = 1;
    for(int i=0; i<n; i++){
        if(s.find(arr[i] -1) != s.end()){
            continue;
        }else{
            int j = arr[i];
            while (s.find(j) != s.end())
                j++;
            res = max(res, j - arr[i]);
        }
    }
    return res;

    /* // Using Priority Queue:-
    priority_queue<int, vector<int>, greater<int>>s(arr.begin(), arr.end());
    if(s.size() == 1)
        return 1;
    int count = 1;
    int res = 1;
    int t = s.top();
    s.pop();
    while(!s.empty()){
        if(t+1 == s.top()){
            count++;
            t = s.top();
            s.pop();
        }
        else if (t == s.top()) {
            t = s.top();
            s.pop();
        } else {
            count = 1;
            t = s.top();
            s.pop();
        }
        res = max(res, count);
    }
    return res;
     */
}