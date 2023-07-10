#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <map>
#include <queue>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <deque>
#include <assert.h>
#include <ctime>
#include <bitset>
#include <numeric>
#include <complex>
using namespace std;
 
#if (_win32 || __win32__)
#define LLD "%i64d"
#else
#define LLD "%lld"
#endif
 
#define FOREACH(i, c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define FOR(i, a, n) for (register int i = (a); i < (int)(n); ++i)
#define Size(n) ((int)(n).size())
#define all(n) (n).begin(), (n).end()
#define ll long long
#define pb push_back
#define error(x) cerr << #x << " = " << x << endl;
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define point complex<double>
//#define X real()
//#define Y imag()
#define X first
#define Y second
#define EPS 1e-8
#define endl "\n"
 
int main() {
 string a, b;
 cin >> a >> b;
 FOR(i, 0, Size(a)) a[i] = tolower(a[i]);
 FOR(i, 0, Size(b)) b[i] = tolower(b[i]);
 cout << strcmp(a.c_str(), b.c_str()) << endl;
 return 0;
}
 