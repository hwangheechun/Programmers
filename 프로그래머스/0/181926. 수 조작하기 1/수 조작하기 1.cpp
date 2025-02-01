#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, string control) {
    int answer = 0;
    
    for(int i = 0; i < control.size(); i++)
    {
        switch(control[i])
        {
            case 'w' : n += 1;
                break;
            case 's' : n -= 1;
                break;
            case 'd' : n += 10;
                break;
            case 'a' : n -= 10;
                break;          
        }
    }
    
    answer = n;
    
    return answer;
}