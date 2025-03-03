#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    string temp;
    
    for (int i = 0; i < my_string.length(); i ++)
    {
        answer += my_string[my_string.length() - 1 - i];
    }
    
    return answer;
}