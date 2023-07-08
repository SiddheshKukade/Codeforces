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
    void solve(){
		int n;
		cin>>n;
		vector<int>a,even,odd;
		for(int i=0; i<n; i++){
			int x; cin>>x;
			if(x%2 ==0) even.push_back(x);
			else {odd.push_back(x);}
		}
		for(auto i: even) a.push_back(i);
		for(auto i: odd) a.push_back(i);
		int total=0;
		for(int i =0; i<n; i++){
					for(int j =i+1; j<n; j++){
						if(__gcd(a[i] , 2*a[j])>1) total++;
						}
		}
		cout<<total<<endl;
    }
    int main()
    {
        // fast input output
        // ll t,n;
        // cin>>t; 
        vector<int>v;
        bool check = true;
        for(int i =0; i<8; i++){
        	int temp = 0;
        // solve();
        cin>>temp;
        v.push_back(temp);
        }
        int size = v.size();
        for(int i=1; i<size; i++){
        	if(v[i] < v[i-1]){
        		check = false; 
        		break;
        	
        	}
        }
        
         for(int i=1; i<size; i++){
         	if(v[i] % 25 !=0){
        			check = false;
        			break;
        	}
}
        if(check){
        	// cout<<"ceck si trie";
        	 sort(v.begin(), v.end());
	         if(v[0] >= 100 && v[size -1] <=675){
	        	check = true;
		     }else{
		     	check = false;
		     }
			if(check){
			     	cout<<"Yes"<<endl;
			        }else{
			        	cout<<"No"<<endl;
			        }   
        }else{
        	cout<<"No"<<endl;
        }
      

        return 0;
    }