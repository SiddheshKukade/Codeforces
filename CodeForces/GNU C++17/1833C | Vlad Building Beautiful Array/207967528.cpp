#include<bits/stdc++.h>
using namespace std;
int a[200001];
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int n;
  cin>>n;
 int minn=0x3f3f3f3f;
 int cnt=0;
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
  if(a[i]&1)
  {
   cnt++;
   minn=min(a[i],minn);
  }
 }
 if(cnt==n||cnt==0)
 cout<<"YES"<<endl;
 else
 {
  int flag=0;
  for(int i=0;i<n;i++)
  {
   if(!(a[i]&1)&&a[i]-minn<=0)
   {
    cout<<"NO"<<endl;
    flag=1;
    break;
   }
  }
  if(flag)
  continue;
  cout<<"YES"<<endl;
 }
}
 return 0;
}