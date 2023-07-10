#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)
   
int main(){
  int n,tot=0; cin>>n; 
  int curCap=0;
  fr(i,0,n){
   int  a,b;
   cin>>a>>b;
   curCap += (-a)+b;
   tot  =max(curCap, tot);
  }
 cout<<tot<<endl;
  
    return 0;
}