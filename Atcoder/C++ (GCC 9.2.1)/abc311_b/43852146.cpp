#include<bits/stdc++.h>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<unordered_set>
#include<queue>
#include<stack>

using namespace std;

#define siddheshkukade() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define Size(n) ((int)(n).size())
#define all(n) (n).begin(), (n).end()
#define pii pair<int, int>
#define pll pair<long,long> 
#define ll long long
#define pb push_back
#define line cout<<endl;
#define error(x) cerr << #x << " = " << x << endl;
#define FOR(i, a, n) for (int i = (a); i < int(n); i++)
#define veci vector<int> 

int gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
bool revsort(int a,int b){return a>b;}
void no(){	cout<<"NO"<<endl;  exit(0);}
void yes(){ cout<<"YES"<<endl;  exit(0); }

// Author: SiddheshKukade

int main() { 
	 string s; 
	 int n ; 
	 cin>>n>>s;
	 bool aa= false, bb=false, cc=false;
	 unordered_map<char,int>mp;
	 for(int i=0; i<n; i++){
	 	char ch = s[i];
	 	if(ch == 'A') aa=true;
	 	if(ch == 'B') bb=true;
	 	if(ch == 'C') cc=true;
		 // if(mp.find(ch) != mp.end()){
		if(aa && bb && cc){
		 	cout<<i+1<<endl;
		 	return 0;
		}
		 // }else{
		 	// mp[ch]++;
		 // }
	 }
	return 0; 
}
/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/
/* ascii value 
A=65,Z=90,a=97,z=122
*/	