#include <bits/stdc++.h>
using namespace std;
#define ll long long 
// Author: SiddheshKukade
int main() {
 long long n; 
 cin>>n; 
 int mx =INT_MIN;
 string ans="";
 unordered_map<string ,int> m;
 for(int i=0; i<n;i++){
  string str; cin>>str;
  m[str]++; 
  int t = m[str];
  
  if(mx < m[str]){
   mx= m[str];
   ans = str;
  }
 }
 cout<<ans<<endl;
 
 return 0; 
}
 