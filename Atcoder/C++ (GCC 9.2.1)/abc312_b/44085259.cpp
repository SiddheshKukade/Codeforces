#include <bits/stdc++.h>

#include <algorithm>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <queue>
#include <stack>

using namespace std;

#define siddheshkukade()              \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL)
#define MOD 1000000007
#define Size(n) ((int)(n).size())
#define all(n) (n).begin(), (n).end()
#define pii pair<int, int>
#define pll pair<long, long>
#define ll long long
#define lli long long int
#define pb push_back
#define line cout << endl;
#define error(x) cerr << #x << " = " << x << endl;
#define FOR(i, a, n) for (int i = (a); i < int(n); i++)
#define veci vector<int>

int gcd(int a, int b)
{
	if (b > a)
	{
		return gcd(b, a);
	}
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}
bool revsort(int a, int b) { return a > b; }
void no() { cout << "No" << endl; }
void yes() { cout << "Yes" << endl; }

ll countDivisors(ll n)
{
	ll cnt = 0;
	for (ll i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			// If divisors are equal,
			// count only one
			if (n / i == i)
				cnt++;

			else // Otherwise count both
				cnt = cnt + 2;
		}
	}
	return cnt;
}
int prime(int m)
{
	for (int i = 2; i <= sqrt(m); i++)
		if (m % i == 0)
			return 0;
	return 1;
}
int N, M;
string S[100];
void authorIsSiddhesh()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> S[i];
	for (int i = 0; i + 9 <= N; i++){
		for (int j = 0; j + 9 <= M; j++)
		{

		bool isThisFine=1;
		for(int x=0;x<=2;x++)for(int y=0;y<=2;y++)
		{
			if(S[i+x][j+y] != '#')

			isThisFine=0;


			if(S[i+6+x][j+6+y] !=  '#'    )
			isThisFine=0;


		}
		for(int t=0;t<=3;t++)
		{
			if(S[i+3][j+t]!='.')
				isThisFine=0;
			if(S[i+t][j+3]!='.')
				isThisFine=0;
			if(S[i+5][j+5+t]!='.')
				isThisFine=0;
			if(S[i+5+t][j+5]!='.')
				isThisFine=0;
		}
		if(isThisFine)cout<<i+1<<" "<<j+1<<endl;
	}
}
}

// Author: SiddheshKukade
const ll mod = 1e9 + 7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	/* before sub
	 * int overflow
	 * special test case (n=0||n=1||n=2)
	 * don't get stuck on one approach if you get wrong answer
	 */
	/* ascii value
	A=65,Z=90,a=97,z=122

	Useful :
	a << b; ==>   a * 2^b
	a >> b; ==>   a  / 2^b

	*/

	bool isTestCaseUsed = 0;

	if (isTestCaseUsed)
	{
		// With test cases
		ll t;
		cin >> t;

		for (; t--;)
		{
			authorIsSiddhesh();
		}
	}
	else
	{
		// without  test cases
		authorIsSiddhesh();
	}

	return 0;
}
