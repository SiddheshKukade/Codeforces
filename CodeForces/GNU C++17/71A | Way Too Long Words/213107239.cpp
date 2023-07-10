#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)
   
int main(){
 int n; cin>>n;
 while(n--){
   string s; 
   cin>>s;
   int sz = s.size();
   if(sz >10){
    
    cout<<s[0]<<sz-2<<s[sz-1]<<endl;
   }else  cout<<s<<endl;
  }
    return 0;
}