#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string N;
  cin >> N;
  list<char> L;
  for (auto c : N) 
      L.push_back(c);
    
  auto cursor = L.end();
  int command;    //명령어 개수
  cin >> command;
  while (command) 
  {
    char op;
    cin >> op;
    if (op == 'P') 
    {
      char add;
      cin >> add;
      L.insert(cursor, add);
    }
    else if (op == 'L') 
    {
      if (cursor != L.begin()) //커서가 제일 앞에 있는게 아니면
          cursor--;
    }
    else if (op == 'D') 
    {
      if (cursor != L.end()) //커서가 제일 뒤에 있는게 아니면
          cursor++;
    }
    else 
    { // 'B'
      if (cursor != L.begin()) {
        cursor--;
        cursor = L.erase(cursor);
      }
    }
     
    command--;
  }
  for (auto c : L) 
      cout << c;
}