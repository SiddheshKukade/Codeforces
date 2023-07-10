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
 ll n ; cin>>n;
 vector<int>p(n);
 int s=0;
 fr(i,0,n) {
  int t=0; cin>>t; s+=t;
 } 
 ld ans=(double)s/n;
 cout<<std::setprecision (15)<<ans<<fixed<<endl;
 
 
 
 return 0;
}