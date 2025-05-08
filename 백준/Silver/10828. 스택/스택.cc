#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    
    cin >> N;
    
    stack<int> S;
    
    while(N--)
    {
        string command;
        cin >> command;
        
        //push X 연산
        if(command == "push")
        {
          int t;
          cin >> t;
          S.push(t);
        }
        //pop 연산
        else if(command == "pop")
        {
          if(S.empty()) cout << -1 << '\n';
          else
          {
            cout << S.top() << '\n';
            S.pop();
          }
        }
        else if(command == "size")
          cout << S.size() << '\n';
        else if(command == "empty")
          cout << (int)S.empty() << '\n';
        else
        { // top
          if(S.empty()) cout << -1 << '\n';
          else cout << S.top() << '\n';
        }
      }
}
