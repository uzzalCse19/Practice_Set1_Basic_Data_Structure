#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
 int main()
 {
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++) 
  {
    int x;
    cin>>x;
    v.push_back(x);
  }
   reverse(v.begin(),v.end());
   for(int val:v) cout<<val<<" ";
   cout<<endl;
    return 0;
 }