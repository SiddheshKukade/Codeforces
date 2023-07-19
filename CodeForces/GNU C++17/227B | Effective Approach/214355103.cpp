#include <bits/stdc++.h>
using namespace std;
#define ll long long 
// Author: SiddheshKukade
const int MAXN = 101*1000;
int main() {
 long long n; 
  cin>>n; 
 int p[MAXN];
 // vector<int> q;
 for(int i=0; i<n;i++){
   int x ; cin>>x;
   p[x] = i+1;
 }
 ll m ;
    ll lmoves=0 , rmoves=0;
 cin>>m;
 for(int i=0; i<m ; i++){
  int q; cin>>q;
     lmoves += p[q];
        rmoves += n-p[q]+1;
 }
 cout<<lmoves<<" "<<rmoves<<endl;
 
 return 0; 
}
 