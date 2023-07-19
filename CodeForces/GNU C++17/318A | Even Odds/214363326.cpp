#include <bits/stdc++.h>
using namespace std;
#define ll long long 
// Author: SiddheshKukade
const int MAXN = 101*1000;
int main() {
 long long n; 
  cin>>n;
  ll m; cin>>m;
  if(m <=((n+1)/2)){
   cout<<2*m-1<<endl;
  }else{
   cout<<2*(m-((n+1)/2))<<endl;   
  }
 return 0; 
}
 
 /*
 7 7
1 3 5 7 2 4 6
*/