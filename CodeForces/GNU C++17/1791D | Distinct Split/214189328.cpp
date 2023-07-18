#include <bits/stdc++.h>
using namespace std;
// Author: SiddheshKukade
 
 int countDistinct (string str){
    std::unordered_set<char> distinctChars;
    
    for (char ch : str) {
        distinctChars.insert(ch);
    }
    
    return distinctChars.size();
  
 }
 
 
 
int main() {
    
 int t;
    cin>>t;
 
    while(t--){ 
   long long n ;
   cin>>n;
   string str;
   cin>>str;
   vector<int> prefix(n,0) , suffix(n,0);
   set<char>se;
   for(int i=0; i<n; i++){
    se.insert(str[i]);
    prefix[i] = se.size();
   } 
  se.clear();
     for(int i=n-1; i>=0; i--){
    se.insert(str[i]);
    suffix[i] = se.size();
   }   
   int ans =0, maxi=INT_MIN;
   for(int i=0;i<n-1; i++){
    ans = prefix[i]+suffix[i+1];
    maxi = max(maxi, ans);
   }
  cout<<maxi<<endl;
  }
 
    return 0;
}