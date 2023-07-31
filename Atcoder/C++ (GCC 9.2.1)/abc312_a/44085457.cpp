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
	#define 		FOR(i, a, n) 					for (int i = (a); i < int(n); i++)
	#define 		veci 							vector<int> 
	
	int 	gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
	bool 	revsort(int a,int b){return a>b;}
	void 	no(){	cout<<"No"<<endl;  }
	void 	yes(){ cout<<"Yes"<<endl;   }
	
	ll countDivisors(ll n)
{
    ll cnt = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
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
int prime(int  m )
{
    for(int i=2;i<=sqrt(m);i++)
        if(m%i==0)     
        return 0;
    return 1;
}
void authorIsSiddhesh(){
	string str;
	cin>>str;
	if(str=="ACE" || str=="BDF" || str=="CEG" || str=="EGB" || str=="FAC" || str=="GBD"|| str=="DFA"){
		yes();
	}else{
		no();
	}
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