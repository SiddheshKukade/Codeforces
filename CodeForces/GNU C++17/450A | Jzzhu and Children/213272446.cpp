#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)
   
int main(){
   int n,m; 
   cin>>n>>m;
   double maxi=0;
   int ans=0;
   for (int i = 1; i <= n; i++){
 /// ##### MAKE SURE TO PUT DOUBLE ALWAYS TO ALL THE VARAIBLES IF THERE IS A DIVISION GOING ON..
  double t; 
  cin>>t;
  // double cur =;
   if( ceil(t/m)>=maxi){
    maxi =  ceil(t/m);
    ans = i;
   } 
   }
  cout<<ans<<endl;
    return 0;
}