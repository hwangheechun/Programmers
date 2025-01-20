#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    if(n % 2 == 1)
        n -= 1;
        
    while(n > 1)
    {
        answer += n;
        n -= 2;
    }
    
    return answer;
}