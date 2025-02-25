#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        for(int j = 0; j < num_list.size() - 1; j++)
        {
            if(num_list[j] > num_list[j + 1])
            {
                int temp = num_list[j];
                num_list[j] = num_list[j + 1];
                num_list[j + 1] = temp;
            }
        }
    }
    
    for(int k = 0; k < 5; k++)
        answer.push_back(num_list[k]);

    return answer;
}