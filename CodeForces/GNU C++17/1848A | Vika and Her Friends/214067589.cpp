#include <bits/stdc++.h>
using namespace std;
// Author: SiddheshKukade
int main() {
    int testcaseSiddheshKukade;
    cin >> testcaseSiddheshKukade;
    while (testcaseSiddheshKukade--) {
        int n, m, k, x, y;
        cin >> n ;
        cin >> m ;
        cin >> k ;
        cin >> x ;
        cin >> y;
        bool espsid = true;
        for (int i = 0; i < k; i++) {
            int xiNumber, yiNumber;
            cin >> xiNumber >> yiNumber;
            int dxNumber = abs(x - xiNumber);
            int dyNumber= abs(y - yiNumber);
            if ((dxNumber + dyNumber) % 2 == 0) {
                espsid = false;
            }
 
        }
        if (espsid) {
 
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}