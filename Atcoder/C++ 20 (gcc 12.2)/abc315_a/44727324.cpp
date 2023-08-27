#include<bits/stdc++.h>

#include<algorithm>
#include<unordered_map>
#include<vector>
#include<unordered_set>
#include<queue>
#include<stack>

using namespace std;

#define 		siddheshkukade() 				ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define 		MOD							    1000000007
#define 		Size(n)							((int)(n).size())
#define 		all(n) 							(n).begin(), (n).end()
#define 		pii								pair<int, int>
#define 		pll 							pair<long,long> 
#define 		ll 								long long
#define 		lli								long long int
#define 		pb 								push_back
#define 		line 							cout<<endl;
#define 		error(x) 						cerr << #x << " = " << x << endl;
#define 		FOR(i, a, n) 					for (int i = (a); i <int(n); i++)
#define 		veci 							vector<int> 
#define 		FOREACH(i, c) 					for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
int 	gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
bool 	revsort(int a,int b){return a>b;}
void 	no(){	cout<<"NO"<<endl;  }
void 	yes(){ cout<<"YES"<<endl;   }
void 	noext(){	cout<<"NO"<<endl;  exit(0); }
void 	yesext(){ cout<<"YES"<<endl;   exit(0);}

void authorIsSiddhesh(){
	
	//source code here
 	string str;
 	cin>>str;
 	string ans ="";
 	for(char ch : str){
 		if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u' ){
 			
 		}else{
 			ans+= ch;
 		}
 	}
 	cout<<ans<<endl;
}

// Author: SiddheshKukade
const ll mod = 1e9+7	;
int main() { 
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
					
			if(isTestCaseUsed){
						// With test cases
				     ll t;
				     cin>>t;
				    
				    for(;t--;)
				    {
				       authorIsSiddhesh();
				
				    } 
			}
			else{
		    //without  test cases
		    authorIsSiddhesh();
			}
    
	return 0; 
}
