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
 unordered_map<int,int> m;
 fr(i, 0, 4){
  int t; cin>>t;
  m[t]++;
 }
 int ans=0;
 for(auto i: m){
  if(i.second>1){ans+=(i.second-1);}
 }
 cout<<ans<<endl;
  
    return 0;
}