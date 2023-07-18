#include <bits/stdc++.h>
using namespace std;
// Author: SiddheshKukade
int main() {
    
    int t;
    cin>>t;
  
    while(t--){
     int no; cin>>no;
     string str; cin>>str;
     int  n=0, m=0;
     for(char ch: str){
      if(ch == 'U'){
   m += 1;
      }else if(ch == 'D'){
       m--;
      }else if(ch == 'R'){
       n++;
      }else if(ch == 'L'){
       n--;
      }
      if(n== 1 && m == 1 ){
   cout<<"YES"<<endl; 
   break;
      }
     }
     if(n!=1 || m!= 1)
      cout<<"NO"<<endl;
    }
    return 0;
}