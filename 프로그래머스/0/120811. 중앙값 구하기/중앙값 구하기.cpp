#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int temp = 0;

    for(int i = 0; i < array.size() - 1; i++)
    {
        for(int i = 0; i < array.size() - 1; i++)
        {
            if(array[i] >= array[i + 1]) 
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;         
            }
        }     
    }
       
    
    answer = array[array.size() / 2];
    
    return answer;
}