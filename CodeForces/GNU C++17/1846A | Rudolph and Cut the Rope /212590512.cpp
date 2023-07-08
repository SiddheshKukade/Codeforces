    #include <iostream>
    #include <bits/stdc++.h>
    #define ll long long
    #define lld long double
    #define ff first
    #define ss second
    #define pb push_back
    #define mp make_pair
    #define fl(i,n) for(int i=0;i<n;i++)
    #define rl(i,m,n) for(int i=n;i>=m;i--)
    #define py cout<<"YES\n";
    #define pn cout<<"NO\n";
    #define pi 3.141592653589793238
    #define vr(v) v.begin(),v.end()
    #define rv(v) v.end(),v.begin()
    #define fast ios_base::sync_with_stdio(false);
    #define input cin.tie(NULL);
    #define output cout.tie(NULL);
    using namespace std;
 
    void solve(){
      int c=0;
    int n ; cin>>n;
    vector<vector<int>> v; 
    for(int i=0; i<n; i++){
      vector<int> temp;
      for(int j=0; j<2; j++){
     int t; cin>>t; 
     temp.push_back(t);
      }
     v.push_back(temp);
   }
   
     for(int i=0; i<n; i++){
       if(v[i][0] > v[i][1]){
      c++;
   }
  }
   cout<<c<<endl;
  }
   
    
    
    int main()
    {
    int tt;
    cin>>tt;
    int i =0;
    fl(i, tt){
     solve();
    }
     return 0;
    }  