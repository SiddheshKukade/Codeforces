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
	// In this input, a year consists of 
	// 31+28+31+30+31+30+31+31+30+31+30+31=365 days.
	// Let us find the middle day, which is the 
	// ((365+1)/2=183)-th day.
	// 
	// Months 
	// 1,2,3,4,5,6 contain a total of 
	// 181 days.
	// Day 
	// 1 of month 
	// 7 is the 
	// 182-th day.
	// Day 
	// 2 of month 
	// 7 is the 
	// 183-th day.
	// Thus, the answer is day 
	// 2 of month 
	// 7.
	void authorIsSiddhesh(){
		
		//source code here
		int n = 0;
		cin>>n;
		
	 	vector<int> months(n);
		ll tot =0;
		FOR(i,0,n){
			cin>>months[i];
			tot+= months[i];
		}
		// if(tot == 1 && n == 1 ) {
			// cout<<"1 1"<<endl;
			// return;
		// }
		ll mid ;
		if(tot % 2 ==0){
			mid = tot /2;
		}else{
			mid = (tot+1) /2 ;
		}
		ll req = mid;
		// cout<<mid; 183
		ll mo=0, day=0;
		FOR(i,0,n){
			
			mid = mid - months[i];
			if(mid <= 0){
				mid += months[i];
				cout<<i+1<<" "<<mid<<endl;
				break;
			}
			// if((mid - months[i]) > 0){
				// mid = mid - months[i];
				// mo++;
			// }else if((mid - months[i]) < 0){
				// ///limit exceedd
				// mo++;
				// day =  mid;
				// // cout<<mid;
				// break;
			// }else if((mid - months[i]) == 0){
				// cout<<mo+1<<" "<<day+1;
				// return;
			// }
		}
		// cout<<mo<</" "<<day<<endl;
		return;
		
	
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
	