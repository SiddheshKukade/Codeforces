#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)
   
int main(){
  int n; cin>>n;
  int ct =0;
  while(n--){
   int a,b,c;
   cin>>a>>b>>c;
  
   a+=b+c;
 
  if(a>=2) {
   ct++;
  }
  } 
  cout<<ct<<endl;
    return 0;
}