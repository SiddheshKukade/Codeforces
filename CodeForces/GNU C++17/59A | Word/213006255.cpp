#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)
 
void solve(){
 
}
 
int main(){
    // ll t = 1;
    // while(t--) solve();
 string s;
 cin>>s; int u=0, l=0;
 fr(i,0,s.size()) {
  if(isupper(s[i])) u++;
  else l++;
 } 
 
 if(u>l){
  for(char &i: s) {
  i=toupper(i);
  }
 } else{
  for(char &i: s) {
  i=tolower(i);
  }
 }
 cout<<s<<endl;
 
    return 0;
}