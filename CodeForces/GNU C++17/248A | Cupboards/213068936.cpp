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
  ll t; cin>>t;
  int tt=t;
  // cout<<"TT"<<t;
  ll l=0,r=0;
 while(tt--) {
  ll n,m;
 cin>>n>>m;
 l+=n;
 r+=m;
 }
 ll ans =min(l, t-l) + min(t-r,r);
 cout<<ans<<endl;
   // cout<<"TT"<<t;
  
 
 return 0;
}