#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)
   
int main(){
  int n; cin>>n;
  int s=0, a;
  for(int i=0; i<n;i++){
   cin>>a; s+=a;
  }
  int p=0;
  int cnt =0;
  for(int i=1; i<=5; i++){
   if(((s+i )% (n+1 ))!=1){ 
   cnt+=1;
   } // increase pos by 1
  }
  cout<<cnt<<endl;
    return 0;
}