#include <iostream>

using namespace std;

int main()
{
    int alphabet1[27] = {};
    int alphabet2[27] = {};
    string s1, s2;
    int count = 0;
    
    cin >> s1 >> s2;
    
    for (auto c : s1) alphabet1[c-'a']++;
    for (auto c : s2) alphabet2[c-'a']++; 
    
    for(int i = 0; i < 27; i++)
    {
        if(alphabet1[i] == alphabet2[i])
            continue;
        else
            count += abs(alphabet1[i] - alphabet2[i]);
    }
    
    cout << count;
}