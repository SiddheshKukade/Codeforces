#include <bits/stdc++.h>
using namespace std;
// Author: SiddheshKukade
int main() {
    
 int t;
    cin>>t;
 
    while(t--){ 
    long long n ,c;
    cin>>n>>c; 
    vector<long long > v(n+1,0);
    for(int i=1; i<=n; i++){
     cin>>v[i];
     v[i] +=i; // also adding the cost here
    }
    int ans=0;
    sort(v.begin(), v.end());
    for(int i=1; i<=n; i++){
     if(c >= v[i]){
      ans++;
      c -= v[i];
     }
    }
    cout<<ans<<endl;
    
    
  }
    return 0;
}