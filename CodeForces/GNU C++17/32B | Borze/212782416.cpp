 #include <bits/stdc++.h>
 
using i64 = long long;
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::string s;
    std::cin >> s;
    
    int n = s.size();
    
    std::string ans;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            ans += '0';
        } else if (s[i + 1] == '.') {
            ans += '1';
            i++;
        } else {
            ans += '2';
            i++;
        }
    }
    std::cout << ans << "\n";
    
    return 0;
}