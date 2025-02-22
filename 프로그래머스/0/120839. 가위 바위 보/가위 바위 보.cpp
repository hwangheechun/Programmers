#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    
    for(int i = 0; i < rsp.size(); i++)
    {
        switch(rsp[i])
        {
            case '2':
                answer += '0';
                break;
            case '0':
                answer += '5';
                break; 
            case '5':
                answer += '2';
                break;
        }
    }
    
    return answer;
}