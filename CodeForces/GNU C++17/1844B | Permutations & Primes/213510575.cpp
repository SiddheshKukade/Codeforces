 #include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int ttt;
    cin >> ttt;
    while(ttt--){
        int n;
        cin >> n;
        if (n <= 2){
            for(int i = 0; i < n; i++){
                cout << i + 1 << ' ';
            }
            cout << '\n';
            continue;
        }
        vector<int> ans(n, -1);
        ans[n / 2] = 1;
        ans[0] = 2;
        ans[n - 1] = 3;
        int cur = 4;
        for(int i = 0; i < n; i++){
            if (ans[i] == -1) ans[i] = cur++;
        }
        for(int i = 0; i < n; i++){
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}