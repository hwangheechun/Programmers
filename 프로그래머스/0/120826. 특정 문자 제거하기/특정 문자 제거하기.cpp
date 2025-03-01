#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    
    const char * letterChar = letter.c_str();
    
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] != *(letterChar))
        {
            answer += my_string[i];
        }
    }
    
    return answer;
}