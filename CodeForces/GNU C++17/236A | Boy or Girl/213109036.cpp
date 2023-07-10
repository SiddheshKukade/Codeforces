#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define ret(s) {cout<<s<<endl; return;}
#define fr(i, a, n) for(ll i = a; i < n; i++)
#define frr(i, a, n) for(ll i = a; i >= n; i--)
   
int main(){
  string str; cin>>str;
     unordered_set<char> s;
 
    // Loop to traverse the string
    for (int i = 0; i < str.size(); i++) {
 
        // Insert current character
        // into the set
        s.insert(str[i]);
    }
 
    // Return Answer
    if(s.size()%2==0){
     cout<<"CHAT WITH HER!"<<endl; 
    } else{
     cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}