#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
 int main()
 {
  int n;
  cin>>n;
  vector<int>v1;
  vector<int>v2;
  for(int i=0;i<n;i++) 
  {
    int x;
    cin>>x;
    v1.push_back(x);
  }
   for(int i=0;i<n;i++) 
  {
    int x;
    cin>>x;
    v2.push_back(x);
  }
  v2.insert(v2.begin()+n,v1.begin(),v1.end());
  for(int it:v2) cout<<it<<" ";
  cout<<endl;
    return 0;
 }