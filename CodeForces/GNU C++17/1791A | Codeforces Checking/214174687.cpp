#include <bits/stdc++.h>
using namespace std;
// Author: SiddheshKukade
int main() {
    
    int t;
    cin>>t;
    string name = "codeforces";
    while(t--){
     char ch; cin>>ch;
     size_t  f = name.find(ch);
     if(f != string::npos){
      cout<<"YES"<<endl;
     }else {
      cout<<"NO"<<endl;
     }
    }
    return 0;
}