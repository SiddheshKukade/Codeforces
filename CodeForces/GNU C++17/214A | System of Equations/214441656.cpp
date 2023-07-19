#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define loop(x,n) for(int x = 0; x < n; ++x)
// Author: SiddheshKukade
 void no(){
  cout<<"NO"<<endl;
  exit(0);
 }
int main() {
 ll n , m ;
  cin>>n>>m;
  ll c=0;
  for(int a=0; a<=1000; a++){
   for(int b=0; b<=1000; b++){
    if(((a*a)+b)== n  && (b*b)+a  == m) c++;
   }   
  }
  cout<<c<<endl;
    return 0;
     
}