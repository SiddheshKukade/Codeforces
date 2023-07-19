#include <bits/stdc++.h>
using namespace std;
#define ll long long 
// Author: SiddheshKukade
 void no(){
  cout<<"NO"<<endl;
  exit(0);
 }
int main() {
  string s1,s2;
  cin>>s1>>s2;
  if(s1.size()  != s2.size()) no();
  ll n  = s1.size();
  ll m = n-1;
  for(int i=0; i<n;i++){
   if(s1[i] == s2[m]){
    m--;
   }else{
    no();
   }
  }
  cout<<"YES"<<endl;
    return 0;
     
}