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
     
     int n; cin>>n;
     string s ; cin>>s;
     int c=0;
     for(int i=1; i<n; i++){
      if(s[i] == s[i-1]){
       c++;
      }
     }
     cout<<c<<endl;
     return 0;
 }