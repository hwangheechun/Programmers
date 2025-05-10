#include <bits/stdc++.h>
using namespace std;

int N;
stack<int> S;
int cnt = 1;
string ans;

int main()
{
    cin >> N;
    
    while(N--)
    {
        int a;
        cin >> a;
        
        while (cnt <= a) 
        {
          S.push(cnt++);
          ans += "+\n";
        }
        if (S.top() != a) 
        {
          cout << "NO\n";
          return 0;
        }
        S.pop();
        ans += "-\n";
    }
    cout << ans;
}