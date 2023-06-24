#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>>res;
  for(int line=1; line<=n; line++){
    int C =1;
    vector<long long int>temp;
    for(int i=1; i<=line; i++){
      temp.push_back(C);
      C = C *(line -i)/i;
    }
    res.push_back(temp);
  }
  return res;
}
