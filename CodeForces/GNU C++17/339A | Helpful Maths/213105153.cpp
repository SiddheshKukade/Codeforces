#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)
   
int main(){
 string str;
 cin>>str;
 vector<int> v;
 for(char &ch: str){
   if(ch != '+'){
    int t=(int )ch;
    v.push_back(t);
   }
 }
 int i=0;
 sort(v.begin(), v.end());
 for(char &ch: str){
   if(ch != '+'){
   ch=(char)v[i++];
   }
 }
 cout<<str<<endl;
   
  
    return 0;
}