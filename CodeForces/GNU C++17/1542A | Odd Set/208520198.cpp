#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
const int M = 1e9+7;
ll mod(ll x){
    return (x%M + M)%M;
}
 
ll mul(ll a, ll b){
    return mod((mod(a)*mod(b)));
}
 
ll add(ll a , ll b){
    return mod(mod(a)+mod(b));
}
 
void solve(){
    int n;  // number of pairs
    cin>>n;
    int e=0,o=0;
    for(int i=0;i<2*n;i++){
        int x;
        cin>>x;  /// single element in the pair list
        if(x %2 ==0) e++;
        else o++;
    }
    // For each test case, print "Yes" 
    // if it can be split into exactly n
// pairs so that the sum of the two elements 
// in each pair is odd, and "No" otherwise. 
// You can print each letter in any case.
 
// YOU NEED AT LEAST sAME ODD AND EVEN NUMBERs TO GET THE SUM AS ODD FOR ALL BY FORING  THEIR PAIRS
    if(e ==o) {
        cout<<"Yes"<<"\n";
    }else{
        cout<<"No"<<"\n";
    }
}   
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";  
                solve();
    }
    return 0;
}