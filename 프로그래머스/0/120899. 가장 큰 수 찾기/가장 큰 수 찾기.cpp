#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max = 0, index;
    
    for(int i = 0; i < array.size(); i++)
    {
        if(array[i] >= max)
        {
            max = array[i];
            index = i;
        }
    }
    
    answer.push_back(max);
    answer.push_back(index);
    
    return answer;
}