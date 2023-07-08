#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    // long long  t ,b[7], i,j,k;
    // cin>> t;
    // for(;t--;){
    //     cin>>b[0]>>b[1]>>b[2]>>b[3]>>b[4]>>b[5]>>b[6];
    //     cout<<b[0]<<" "<<b[1]<<" ";
 
    //     if(b[0] + b[1] == b[2]){
    //         cout<<b[3]<<"\n";
    //     }else{
    //         cout<<b[2]<<"\n";
    //     }
    // }
    int a,b,n;
    int total = 0;
    cin>>total;
 
    while(total > 0){
    total--;
    cin>>n;
    a = n  /3; /// /3 will break it into equal parts making it a + 2b = n 
    b = n/3 ; 
    int rem = n % 3 ;
    if(rem ==1){
        cout<<a+1<<" "<<b<<"\n";
    }else if(rem ==2){
        cout<<a<<" "<<b+1<<"\n";
    }else{
        cout<<a<<" "<<b<<"\n";
    }
    }
    return 0;
}