#include <bits/stdc++.h> 
using namespace std;

int uniqueSubstrings(string input)
{
    int n = input.size();
    int l = 0, r = 0;
    unordered_set<char> visited;
    int maxStr = 0;
    int maxL = 0, maxR = 0;
    while (r < n) {
        if (visited.find(input[r]) == visited.end()) {
            visited.insert(input[r]);
            if (r - l + 1 > maxStr) {
                maxStr = r - l + 1;
                maxL = l;
                maxR = r;
            }
            r++;
        }
        else {
            visited.erase(input[l]);
            l++;
        }
    }
    return (maxR - maxL+1);
}