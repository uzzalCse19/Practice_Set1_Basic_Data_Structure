#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
 int main()
 {
  vector<int>v(26,0);
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
    v[s[i]-'a']++;
  }
  for(int i=0;i<26;i++)
  {
    if(v[i]>0)
    {
      cout<<(char)(i+'a')<<" : "<<v[i]<<endl;
    }
  }
    return 0;
 }