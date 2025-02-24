#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    
    if(price >= 100000 && price < 300000)
        answer = price * 0.95f;
    else if(price >= 300000 && price < 500000)
        answer = price * 0.9f;
    else if(price >= 500000)
        answer = price * 0.8f;
    else
        answer = price;
    
    return answer;
}