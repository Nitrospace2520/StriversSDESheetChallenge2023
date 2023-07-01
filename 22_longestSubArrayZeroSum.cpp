#include <bits/stdc++.h>
using namespace std;

int LongestSubsetWithZeroSum(vector < int > arr) {
  int max_len = 0;
  int N = arr.size();
  for (int i = 0; i < N; i++) {
    int curr_sum = 0;
    for (int j = i; j < N; j++) {
      curr_sum += arr[j];
      if (curr_sum == 0)
        max_len = max(max_len, j - i + 1);
    }
  }
  return max_len;
} 