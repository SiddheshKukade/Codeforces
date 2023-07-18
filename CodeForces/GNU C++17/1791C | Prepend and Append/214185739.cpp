#include <bits/stdc++.h>
using namespace std;
// Author: SiddheshKukade
 
int main() {
    
    int t;
    cin>>t;
  
    while(t--){ 
    int n; cin>>n;
    string str; cin>>str;
    
    int s=0,e=n-1;
    while( s< e && str[s] != str[e]){
      s++;
      e--;
     } 
 cout<<e-s+1<<endl;
    }
 
    return 0;
}