#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)
 
void solve(){
  int y; cin>>y;
  int a,b,c,d; 
  int ans;
  while(1)
   { 
   a = y%10;
    y/=10;
    b = y%10;
    y/=10;
    c = y%10;
    y/=10;
    d = y%10;
    if( a!=b && a!=c && a!=d && b!=c && b!=d &&c!=d){
     cout<<ans<<endl;
     break;
    }
    y = ans;
  }
 
}
 
int main(){
    // ll t = 1;
    // while(t--) solve();
  int y; cin>>y; 
  int a,b,c,d; 
  int ans;
  while(1)
   { 
   y++;
   ans = y;
   a = y%10;
    y/=10;
    b = y%10;
    y/=10;
    c = y%10;
    y/=10;
    d = y%10;
    if( a!=b && a!=c && a!=d && b!=c && b!=d &&c!=d){
     cout<<ans<<endl;
     break;
    }
    y = ans;
  }
    return 0;
}