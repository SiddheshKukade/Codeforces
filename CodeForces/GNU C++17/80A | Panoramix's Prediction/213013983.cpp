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
     int n,m; cin>>n>>m; 
   
  
      int next = n + 1;
      while (!isPrime(next))
      {
          next += 1;
      }
  
      cout << (next == m ? "YES" : "NO") << endl;
       return 0;
   }