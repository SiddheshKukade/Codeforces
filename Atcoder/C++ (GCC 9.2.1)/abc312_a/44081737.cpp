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
	 ll n ,d ;
	 cin>>n>>d;
	 ll t = n;
	 vector<string>vs(n);
	 for(int i=0; i<n ;i++){
	 	cin>>vs[i];
	 }
	 unordered_map<int,int>mp;
	  for(int i=0; i<n ;i++){
			string curr = vs[i];
	 		for(int j=0; j<d; j++){
	 			if(curr[j] == 'o'){
	 				mp[j]++;
	 			}
	 		}
	 }
	 int mx = INT_MIN;
	 int ans=0;
	 for(auto i: mp){
	 	if(i.second> mx){
	 		mx = max(mx, i.second);
	 		ans = i.first;
	 	}
	 }
	 if(mx != n ){
	 	cout<<0; return 0;
	 }
	 int consec =1;
	 int curr=0;
	 for(int j=0; j<d; j++){
	 	if(mp[j] != n){
	 		consec= max(curr,consec);
	 		curr=0;
	 		// break;
	 	}else{
	 		curr++;
	 	}
	}
			consec= max(curr,consec);
	 cout<<consec<<endl;
	 
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