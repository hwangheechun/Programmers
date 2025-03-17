#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(int i = 0; i < myString.size(); i++)
    {
        if(myString[i] == 'a')
            answer += 'A';
        else if(myString[i] > 'a' && myString[i] <= 'z')
            answer += myString[i];
        else if(myString[i] == 'A')
            answer += 'A';
        else if(myString[i] > 'A' && myString[i] <= 'Z')
            answer += myString[i] + 32;
        else
            answer += ' ';
    }
    
                         
    return answer;
}