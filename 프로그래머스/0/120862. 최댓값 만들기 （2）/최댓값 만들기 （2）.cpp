#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    sort(numbers.begin(), numbers.end());
    
    int left = numbers[0] * numbers[1];
    int right = numbers[numbers.size() - 1] * numbers[numbers.size() - 2];
    
    if(left >= right)
        answer = left;
    else
        answer = right;
    
    return answer;
}