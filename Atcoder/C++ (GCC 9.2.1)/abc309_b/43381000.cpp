 
#include <bits/stdc++.h>
 
using namespace std; 

#define fr(a,b,c)        for(int a=b;a<c;a++)
#define rfr(a,b,c)       for(int a=b;a>c;a--)
#define nl               ("\n")
#define ll            long long
#define double           l ong double
#define vi               vector<int>
#define vb               vector<bool>
#define vs               vector<string>
#define pb(n)            push_back(n)
#define eb(n)            emplace_back(n)
#define mp(a,b)          make_pair(a,b)
#define bitcntll(n)      __builtin_popcountll(n)
#define ff               first
#define ss               second             
#define sz(s)            (long long)(s.size())
#define all(v)           (v).begin(),(v).end()
#define sp(n)            cout<<setprecision(n)<<fixed;
#define in(v)            for(auto &item : v) cin>>item;
#define inp(v)           for(auto &item : v) cin>>item.ff>>item.ss;
#define google(T)        cout<< "Case #" << T << ": ";
// #define ll 				 long long
 
 
/*
 
1. Think Greedy
2. Think Brute Force
3. Think solution in reverse order
4. Think DP [ check constraints carefully ]
5. Check base cases for DP and prove solution for Greedy
6. Think Graph 
 
*/
 

 
signed main()
{
      int A, B;
    cin >> A >> B;

    int row = (A - 1) / 3;
    int col_A = (A - 1) % 3;
    int row_B = (B - 1) / 3;
    int col_B = (B - 1) % 3;

    if (abs(col_A - col_B) == 1 && row == row_B) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;;
	 
  
    return 0;
}