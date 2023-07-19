#include <bits/stdc++.h>
using namespace std;
#define ll long long 
// Author: SiddheshKukade
/* Recursive function to reverse digits of num*/
ll  reverseDigits(ll num)
{
    static ll rev_num = 0;
    static ll base_pos = 1;
    if (num > 0) {
        reverseDigits(num / 10);
        rev_num += (num % 10) * base_pos;
        base_pos *= 10;
    }
    return rev_num;
}
int main() {
   int n, state(0);
    cin >> n;
 
    bool magic(true);
  while(n){
   int d = n% 10;  n /= 10;
         if (d == 1)
        {
            state = 0;
        }
        else if (d == 4 && state < 2)
        {
            state = state + 1;
        }
        else
        {
            magic = false;
        }
   }
 if (state != 0)
    {
        magic = false;
    }
    cout << (magic ? "YES" : "NO") << endl;
    return 0;
     
}