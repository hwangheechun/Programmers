#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    int sum = 0;
    int mul = 1;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        sum += num_list[i];
        mul *= num_list[i];
    }
    
    sum *= sum;
    
    cout << sum << mul << endl;
    
    answer = (sum > mul)? 1 : 0;
    
    return answer;
}