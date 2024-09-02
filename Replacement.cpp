#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
 int main()
 {
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++) 
  {
   
    cin>>v[i];
    if(v[i]<0) replace(v.begin()+i,v.end()-(n-i)+1,v[i],2);
    else if(v[i]>0) replace(v.begin()+i,v.end()-(n-i)+1,v[i],1);
  }
   
   for(int val:v) cout<<val<<" ";
   cout<<endl;
    return 0;
 }