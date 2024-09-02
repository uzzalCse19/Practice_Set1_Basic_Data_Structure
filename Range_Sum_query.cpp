#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
 int main()
 {
  int n,q,j=1;
  cin>>n>>q;
  vector<int>v(n);
  vector<long long int>prSum(n);
  cin>>v[0];
  prSum[0]=v[0];
  for(int i=1;i<n;i++)
  {
    cin>>v[i];
    prSum[j]=prSum[j-1]+v[i];
    j++;
  }
 while(q--)
  {
    int l,r;
    cin>>l>>r;
    if(l>1) cout<<-prSum[l-2]+prSum[r-1]<<endl;
    else cout<<prSum[r-1]<<endl;
  }
    return 0;
 }