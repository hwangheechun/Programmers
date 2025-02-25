#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int remain = hp;
    
    if(hp >= 5)
    {
        answer += hp / 5;
    }
    
    remain = hp % 5;
    
    if(remain != 0)
    {
        switch(remain)
        {
            case 1:
            case 3:
                answer += 1;
                break;
            case 2:
            case 4:
                answer += 2;
                break;
        }
    }


    cout << answer << endl << remain << endl;
    
    return answer;
}