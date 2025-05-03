#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int testCount;
  cin >> testCount;
    
  for(int i = 0; i < testCount; i++)
  {
    list<char> L = {};    //char 타입 리스트. 반복할 때마다 초기화
    string password;
    auto cursor = L.begin();    //커서는 리스트의 처음 원소 주소 

    cin >> password;    //한 번에 다 입력받기
    for (auto c : password) 
    {
      if (c == '<') 
      {
        //예외 처리
        if (cursor != L.begin()) cursor--;
      }
      else if (c == '>') 
      {
        //예외 처리
        if (cursor != L.end()) cursor++;
      }
      else if (c == '-') 
      {
        if (cursor != L.begin()) 
        {
          cursor--;
          cursor = L.erase(cursor);    //지우고 커서 앞의 값(앞의 원소 주소) 반환 
        }
      }
      else L.insert(cursor, c);    //L에 insert
    }
      for (auto c : L) 
          cout << c;
        cout << '\n';    //작은 따옴표
   }
}