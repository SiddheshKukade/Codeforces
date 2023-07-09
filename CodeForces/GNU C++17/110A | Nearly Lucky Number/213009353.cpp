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
     
     int f=0;
  string n; cin>>n;
  
  fr(i,0,n.size()){
   if(n[i]== '4' || n[i]=='7'){
    f++; 
   }
  }
  if(f ==4 || f==7 ) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 
     return 0;
 }