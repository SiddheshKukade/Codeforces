 #include <iostream>
#include <string>
 
using namespace std;
 
int k, c[26];
string s, tmp;
 
int main() {
    cin >> k >> s;
    for (int i = 0; i < int(s.size()); i++)
        c[s[i]-'a']++;
    for (int i = 0; i < 26; i++)
        if (c[i]%k) {
            cout << -1 << endl;
            return 0;
        } else {
            tmp += string(c[i]/k, 'a'+i);
        }
    while (k--) cout << tmp;
    cout << endl;
    return 0;
}