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
    vector<int> a(4);
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    int b,c;
    b = max(a[0], a[1]);
    c = max(a[2], a[3]); /// recevied the finalists
    sort(a.begin(), a.end());
    if(max(b,c) == max(a[2], a[3]) && min(b,c) == min(a[2], a[3]) ) // check is the current max finalists are the only 2 topmost larget elements in the array or not.
        cout<<"Yes"<<endl;
    else 
        cout<<"No"<<endl;
 
 
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