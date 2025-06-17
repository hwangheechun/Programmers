#include <bits/stdc++.h>
using namespace std;

int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  int n;
  cin >> n;
  while (n--) 
  {
    string a;
    cin >> a;
    stack<char> s;
    bool _isValid = true;
    for (auto c : a) 
    {
      if (c == '(')
        s.push(c);
      else { // c == ')'
        if (s.empty() || s.top() != '(') 
        {
          _isValid = false;
          break;
        }
        s.pop();
      }
    }
    if (!s.empty()) _isValid = false;
    
    if (_isValid) cout << "YES\n";
    else cout << "NO\n";
  }
}