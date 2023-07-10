#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)
   
int main(){
  string s1,s2,s3;
  cin>>s1>>s2>>s3;
  unordered_map<char,int> m;
  for(char &c: s1){
   m[c]++;
  }
  for(char &c: s2){
   m[c]++;
  }
 for(char &c: s3){
   m[c]--;
  }
  for(auto i: m){
   if(i.second !=0){
    cout<<"NO"<<endl; return 0;
   }
  }
  cout<<"YES"<<endl;
    return 0;
}