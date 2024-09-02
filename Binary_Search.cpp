#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
 int main()
 {
  int n,q;
  cin>>n>>q;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  for(int i=0;i<q;i++)
  {
    int trgt;
    cin>>trgt;
   int l=0,r=n-1,flag=0;
   while (l<=r)
   {
    int mid=l+(r-l)/2;
    if(trgt==v[mid])
    {
      cout<<"found"<<endl;
        flag=1;
        break;
    }
    else if(trgt>v[mid]) l=mid+1;
    else r=mid-1;
   }
   if(flag==0) cout<<"not found"<<endl;
  }
    return 0;
 }