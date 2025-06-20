#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  string s;
  ll ans = 0;
  stack<char> st;  
    
  cin >> s;
  int sz = s.length();
  for (int i = 0; i < sz; i++) 
  {
    if (s[i]=='(')
      st.push(s[i]);
    else //')'가 나와서 레이저임이 확실해짐
    {
      if (s[i-1] == '(') 
      { 
        st.pop(); //1개를 빼고 ()쌍으로 레이저를 만든 다음
        ans+=st.size(); // 그 전까지 (가 막대가 잘린 개수
      }
      else 
      { 
        st.pop();  // 막대의 개수를 1 감소
        ans++; // 막대 1개가 절단된 것과 동일한 상황이므로 ans에 1 추가
          //설명 참조
      }
    }
  }
  cout << ans << "\n";
  return 0;
}