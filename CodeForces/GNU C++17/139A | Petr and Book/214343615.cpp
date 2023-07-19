#include <bits/stdc++.h>
using namespace std;
#define ll long long 
// Author: SiddheshKukade
int main() {
 long long n; 
 cin>>n;
 
 vector<int> v(7);
 for(int i=0; i<=6; i++){
  cin>>v[i];
 }
 ll ans=0;
 int i=0;
 while(ans < n){
  ans+= v[i%7];
   i = i+1;
   i = i % 7; 
 }
 if(i== 0 ) cout<<7<<endl;
 else cout<<i<<endl;
 
 return 0; 
}
 