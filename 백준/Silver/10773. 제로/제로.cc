#include <bits/stdc++.h>
using namespace std;

int k, sum = 0, n;
stack<int> S;

int main()
{
    cin >> k;
    
    while(k--)
    {
        cin >> n;
        
        if(n == 0) S.pop();
        else S.push(n);    
    }
    
    while(!S.empty())    //차 있다면
    {
        sum += S.top();
        S.pop();
    }
    
    cout << sum;
}