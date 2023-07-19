#include <bits/stdc++.h>
using namespace std;
#define ll long long 
// Author: SiddheshKukade
int main() {
 ll n,m; 
  cin>>n>>m;
  vector<int>v(m);
 
  for(int i=0; i<m;i++) cin>>v[i];
  ll curr=1;
 ll ans=0;
  for(int i=0; i<m; i++){
  if(curr != v[i]){
   if(curr>v[i]){
    ans = ans+((n-curr)+v[i]);
    curr = v[i];
   }else{
    ans += abs(curr - v[i] );
    curr = v[i];
   }
  }
  
  }
  cout<<ans<<endl;
  return 0;  
}