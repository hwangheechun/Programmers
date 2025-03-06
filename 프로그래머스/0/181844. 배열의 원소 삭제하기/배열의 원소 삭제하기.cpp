#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < delete_list.size(); j++)
        {
            if(arr[i] == delete_list[j])
            {
                answer.push_back(arr[i]);
            }
        }
    }
    for(int k = 0; k < arr.size(); k++)
    {
        for(int m = 0; m < answer.size(); m++)
        {
            if(answer[m] == arr[k])
                arr.erase(arr.begin() + k);
        }    
    }
    
    answer = arr;
    
    return answer;
}