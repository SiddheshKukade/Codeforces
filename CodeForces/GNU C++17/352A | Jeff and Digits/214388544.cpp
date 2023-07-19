#include <bits/stdc++.h>
using namespace std;
#define ll long long 
// Author: SiddheshKukade
int main() {
 ll n; 
  cin>>n;
  vector<int>v(n);
  int f=0,z=0;
  
  for(int i=0; i<n;i++) cin>>v[i];
  
  for(int i=0; i<n; i++){
   if(v[i] == 5){
    f++;
   }else z++;
  }
  if(z==0){
   cout<<-1<<endl;
   return 0;
  }
  if(f<9 ){
   cout<<0<<endl; return 0;
  }
  else{
   f -= f%9; // removing the excess;
   for(int i=0; i<f;i++){
    cout<<5;
   }
   for(int i=0; i<z;i++){
    cout<<0;
   }
  }
  
}