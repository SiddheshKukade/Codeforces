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
    ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
    ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
    bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
    bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
    void printarr(ll arr[], ll n){fl(i,n) cout << arr[i] << " ";cout << "\n";}
    string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
    ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
    bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
    //Code by Abhinav Awasthi
    //Language C++
    //Practice->Success
    int main()
    {
        fast input output
        ll t,n;
        cin>>t; 
        for(int tt =0; tt<t; tt++){
         ll a,b,n;
         cin>>n>>a>>b;
         ll s =1;
         int flag =0;
         if(a==1){
          if((n-1) %b ==0){
           cout<<"Yes\n";
          }else{
           cout<<"No\n";
          }
          continue;
         }
        
        while(s<=n){
         if((n-s)%b ==0){
          flag =1;
          break;
         }
         s = s*a;
        }
        if(flag){
         cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
        }
        // vector<ll>v,a(0);
        // ll w= LONG_LONG_MIN;
        // fl(i,t)
        // {
            // cin>>n;
            // v.pb(n);
            // if(n>w)
            // w=n;
        // }
        // ll c=1;
        // while(a.size()<w)
        // {
            // if(c%3==0||c%10==3)
            // {c++;continue;}
            // else {a.pb(c);c++;}
//             
        // }
        // for(int i=0;i<v.size();i++)
        // { 
            // cout<<a[v[i]-1]<<"\n";
        // }
        return 0;
    }