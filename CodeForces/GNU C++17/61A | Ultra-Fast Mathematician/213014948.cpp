 #include<bits/stdc++.h>
 using namespace std;
  
 #define ll long long
 #define ld long double
 #define ret(s) {cout<<s<<endl; return;}
 #define fr(i, a, n) for(ll i = a; i < n; i++)
 #define frr(i, a, n) for(ll i = a; i >= n; i--)
  
 bool isPrime(int n){
  if(n<=1) return false;
  fr(i,2,(sqrt(n)+1)){
   if(n%i==0){
    return false;
   }
  }
  return true;
 }
  
 int main(){
     // ll t = 1;
     // while(t--) solve();
  string n,m,a="";
  cin>>n>>m;
  for(int i=0; i<n.size(); i++){
    if(n[i] == m[i]){
      a = a+'0'; 
    }
    else {
     a=a+'1';
   }
  }
  cout<<a<<endl;
  return 0;
  }