#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[1000000];
    int n;
    cin >> n;
    
    int arr2[n];
    
    stack<int> S;
    
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    for(int i = n - 1 ; i >= 0; i--)
    {
        while (!S.empty() && S.top() <= arr[i]) S.pop();
        if (S.empty())
          arr2[i] = -1;
        else
          arr2[i] = S.top();
        
        S.push(arr[i]);

    }
        
    for (int i = 0; i < n; i++) cout << arr2[i] << ' ';   
}