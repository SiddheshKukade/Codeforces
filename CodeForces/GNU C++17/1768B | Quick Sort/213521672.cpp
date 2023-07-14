#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t, n, k, ans, i, j, sm;
    cin>>t;
    
    for(;t--;)
    {
       cin>>n>>k;
       
       ll a[n+1];
       
       sm=n+1;
       ans=n+1;
       
       for(i=1; i<=n; i++)
       {
           cin>>a[i];
       }
       for(i=n; i>=1; i--)
       {
           if(sm<a[i]){
               ans=min(ans, a[i]);
           }
           sm=min(sm, a[i]);
       }
       
       if(ans==n+1)
       cout<<"0\n";
       else
       {
           ans=n-ans+1;
           
           if((ans%k)==0)
           cout<<ans/k<<"\n";
           else
           cout<<ans/k+1<<"\n";
       }
    }
    
}