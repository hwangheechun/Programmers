#include <string>
#include <vector>
#include <string>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string ab = to_string(a) + to_string(b);
    string ba = to_string(b) + to_string(a);
    
    if(stoi(ab) >= stoi(ba)) 
        answer = stoi(ab);
    else
        answer = stoi(ba);
    
    return answer;
}