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
 ll k;
  cin>>k;
  ll sum=0 ,days=0;
  vector<int>v(12);
  if(k==0){ cout<<0<<endl; return 0;}
  for(int i=0; i<12;i++){
   cin>>v[i];
  }
  sort(v.begin(),v.end(), greater<int>());
  
   for(int i=0; i<12;i++){
   sum += v[i];
        days++;
   if(sum>= k){ 
    cout<<days<<endl;
    return 0;
   }
  }
  if(sum < k){
   cout<<-1<<endl;
  }
    return 0;
      
}