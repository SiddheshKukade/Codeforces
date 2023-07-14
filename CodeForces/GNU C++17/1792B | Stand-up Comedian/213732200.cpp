#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, a1, a2, a3, a4, i, j, ans;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>a1>>a2>>a3>>a4;
        /// CORNER CASE
        if(a1==0){ // if total ++ jokes are finished.
         if(a2>0 || a3>0 || a4>0){
          cout<<"1"<<endl; //someone will surely leave the show
          // as all mood is started with zero
         }else{
          cout<<"0"<<endl;
         }
         continue;
        }
        ans =a1;
        if(a2>a3){
         swap(a2,a3);
        }
        ///for +- and -+ types interchangably do both the jokes one by one
        ans = ans + 2*a2;
        a3=a3-a2; /// posssible jokes
        ans = ans+min(a1+1, a3+a4);
        
        cout<<ans<<"\n";
    }
}