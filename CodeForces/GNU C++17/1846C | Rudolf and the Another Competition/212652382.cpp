#include<bits/stdc++.h>
using namespace std;
    // ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
    // ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
    // bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
    // bool sortd(const pair<int,int> &a,const pair<inPRAPRAt,int> &b){return (a.second > b.second);}
    // void printarr(ll arr[], ll n){fl(i,n) cout << arr[i] << " ";cout << "\n";}
    // string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
    // ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
    // bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
    //Code by Abhinav Awasthi
    //Language C++
    //Practice->Success
#define int long long 
#define int long long 
#define pb push_back
#define loop(n) for(long long i=0;i<n;i++)
#define rloop(n) for(long long i=n-1;i>=0;i--)
 
 
bool sortbyCond(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first != b.first)
        return (a.first < b.first);
    else
        return (a.second > b.second);
}
signed main() {
    int tyyyy;
    cin >> tyyyy;
 
 
 
 
    while (tyyyy--) {
        int n, m, h, x;
        cin >> n >> m >> h;
        vector<pair<int, int>> vv;
        int pp, ppx;
        loop(n) {
            vector<int> v;
            for (int j = 0; j < m; j++) {
                cin >> x;
                v.pb(x);
            }
            sort(v.begin(), v.end());
            int ans = 0, s = 0;
            int j = 0;
            for (j = 0; j < m; j++) {
                s += v[j];
                ans += s;
                if (s > h)
                    break;
            }
            if (j == m)
                j--;
            if (s > h) {
                j--;
                ans -= s;
            }
            vv.pb({j, ans});
            if (i == 0) {
                pp = j;
                ppx = ans;
            }
        }
        sort(vv.rbegin(), vv.rend(), sortbyCond);
        int final = 0;
        for (auto it : vv) {
            final++;
            if (it.first == pp && it.second == ppx) {
                break;
            }
        }
        cout << final << "\n";
    }
    return 0;
}