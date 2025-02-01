#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    int a = 1;
    
    while(k * a <= n)
    {
        answer.push_back(k * a);
        a++;
    }
    
    return answer;
}