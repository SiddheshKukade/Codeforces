#include <bits/stdc++.h>
using namespace std;
#define ll long long 
// Author: SiddheshKukade
const int MAXN = 101*1000;
int main() {
 long long n; 
  cin>>n; 
 ll m ; cin>>m;
 int a[n];
 for(int i=0; i<n; i++) cin>>a[i];
 sort(a, a+n);
 ll ans = 0;
 for(int i=0; i<n; i++){
  if(m>0){
   if(a[i] <0){
    ans +=abs(a[i]);
    m--;
   }
  }
  if(m==0) break;
 }
 cout<<ans<<endl;
 return 0; 
}
 