#include <iostream> 
#include <vector> 
 
using namespace std; 
 
int main() { 
    int testcase; 
    cin >> testcase; 
 
    while (testcase--) { 
        int n; 
        cin >> n; 
        vector<int> a(n); 
 
        for (int i = 0; i < n; i++) { 
            cin >> a[i]; 
        } 
 
////w
        int max = 1; 
        while (max <= 1e9) { 
            max *= 2; 
        } 
///maximum element
        max -= 1; 
 
        int mn = max; 
        for (int i = 0; i < n; i++) { 
            mn &= a[i]; 
        } 
///taking the answer
        int ans = 0; 
        int cur = max; 
///getting the current element
        for (int i = 0; i < n; i++) { 
            cur &= a[i]; 
            if (cur == 0) { 
                ans += 1; 
                cur = max; 
            } 
        } 
 
        ans += mn > 0; 
        cout << ans << endl; 
    } 
 
    return 0; 
}   