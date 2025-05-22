#include <bits/stdc++.h>
using namespace std;

int main() 
{
    queue<int> q;
    
    int N;
    cin >> N;
    
    while(N--)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        string com;
        cin >> com;
        if(com == "push")
        {
          int val;
          cin >> val;
          q.push(val);
        }
        else if(com == "pop")
        {
          if(q.empty()) cout << -1 << '\n';
          else
          {
            cout << q.front() << '\n';
            q.pop();
          }
        }
        else if(com == "size")
        {
          cout << q.size() << '\n';
        }
        else if(com == "empty")
        {
          cout << q.empty() << '\n';
        }    
        else if(com == "front")
        {
          if(q.empty()) cout << -1 << '\n';
          else cout << q.front() << '\n';
        }
        else
        { 
          if(q.empty()) cout << -1 << '\n';
          else cout << q.back() << '\n';
        }
    }
}