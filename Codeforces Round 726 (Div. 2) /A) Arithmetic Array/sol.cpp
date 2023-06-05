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
    /// if sum is same , positive or negative.
    int n=0,sum=0;
    cin>>n;
    // if n is not the same as of the the total sum of elements then we just have to append empty zeros.
    for(int i =0; i<n;i++){
        int temp; 
        cin>>temp;
        sum+= temp;
    }
    int min_steps = 0;
    if(sum == n ) min_steps = 0;
    else if( sum > 0 && sum >n ) // if positive and greater than n
        min_steps = sum -n;
    else if(sum<=0 || (sum >0 && sum<n))
        min_steps = 1; // we just need a one big positive number to make it a zero.

    cout<<min_steps<<endl;
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
