#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    int max = 0;
    int temp = 0;

    
    for(int i = 0; i < sides.size() - 1; i++)
    {
        if(sides[i] >= sides[i + 1]) 
        {
            temp = sides[i];
            sides[i] = sides[i + 1];
            sides[i + 1] = temp;         
        }
    }
    
    
    if(sides[0] + sides[1] > sides[2])
        return 1;
    else return 2;

    return answer;
}