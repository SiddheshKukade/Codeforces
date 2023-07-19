#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define loop(x,n) for(int x = 0; x < n; ++x)
// Author: SiddheshKukade
 void no(){
  cout<<"NO"<<endl;
  exit(0);
 }
int main() {
 string s;
    cin >> s;
 
    vector<string> words;
    size_t start = 0;
    while (true)
    {
        size_t end = s.find("WUB", start);
        if (end == string::npos)
        {
            words.push_back(s.substr(start, end));
            break;
        }
        if (end != start)
        {
            words.push_back(s.substr(start, end - start));
        }
        start = end + 3;
    }
 
    if (!words.empty())
    {
        cout << words[0];
    }
    for (size_t i = 1; i < words.size(); ++i)
    {
        cout << " " << words[i];
    }
    cout << endl;
 
    return 0;
    return 0;
      
}