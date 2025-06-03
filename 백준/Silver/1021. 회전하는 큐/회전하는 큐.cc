#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  int n, m;
  cin >> n >> m;
  deque<int> DQ;
    
  for (int i = 1; i <= n; i++) DQ.push_back(i);
  int ans = 0;    //연산의 개수
    
  while (m--) //뽑는 원소의 개수가 다 소진될 때까지
  {
    int t;
    cin >> t;
    int idx = find(DQ.begin(), DQ.end(), t) - DQ.begin(); // idx : t가 있는 위치
    //find 함수
      
    while (DQ.front() != t) //제일 앞이 t가 아니라면 계속
    {
      if (idx < DQ.size() - idx)    //t가 있는 위치가 중심을 기준으로 왼쪽(2번 연산이 유리) 
      { 
        DQ.push_back(DQ.front());
        DQ.pop_front();
      }
      else //t가 있는 위치가 중심을 기준으로 오른쪽(3번 연산이 유리)
      {
        DQ.push_front(DQ.back());
        DQ.pop_back();
      }
      ans++;
    }
    DQ.pop_front();
  }
  cout << ans;
}