#include <bits/stdc++.h>
using namespace std;
#define ll long long 
// Author: SiddheshKukade
int main() {
 long long n; 
 cin>>n;
 unordered_map<int, int>  m;
  vector<int>v(n);
  for(int i=0; i<n; i++){
   cin>>v[i];
   m[v[i]] = i+1;
  }
  sort(v.begin(),v.end());
  if(v[0] == v[1]) cout<<"Still Rozdil";
  else cout<<m[v[0]]<<endl;
 
 
 return 0; 
}
 