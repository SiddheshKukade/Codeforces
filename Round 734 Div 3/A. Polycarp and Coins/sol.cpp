#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

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
