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
  ll k,l,m,n,d;
  cin>>k>>l>>m>>n>>d;
  ll c=0;
  fr(i,1,d+1){
   if(i%k ==0 || i%l==0 || i%m==0 || i%n==0){
    c++;
   }
  }
  cout<<c<<endl;
  
 
 return 0;
}