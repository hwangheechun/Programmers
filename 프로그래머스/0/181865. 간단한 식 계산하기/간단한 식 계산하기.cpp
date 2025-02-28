#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    
    string a, b;
    int i = 0;
    char op;
    
    while(binomial[i] != ' ')
    {
        a += binomial[i];
        i++;
    }
    
    op = binomial[i + 1];
    
    while(binomial[i + 3] != '\0')
    {
        b += binomial[i + 3];
        i++;
    }
    
    cout << a << op << b << endl;
   switch(op)
   {
       case '+' :
           answer = stoi(a) + stoi(b);
           break;
       case '-' :
           answer = stoi(a) - stoi(b);
           break;
       case '*' :
           answer = stoi(a) * stoi(b);
           break;    
   }
    
    return answer;
}