#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    while(N--)
    {
    int alphabet[27] = {};
    bool isPossible = true;
    
    string s1, s2;
    cin >> s1 >> s2;
    
    for (auto c : s1) alphabet[c-'a']++; // 첫 번째 문자열의 각 문자는 개수+1
    for (auto c : s2) alphabet[c-'a']--; // 두 번째 문자열의 각 문자는 개수-1
    
    for (int i : alphabet){
      if (i != 0) isPossible = false;
    }
    if(isPossible) cout << "Possible\n";
    else cout << "Impossible\n";
        
    }
}