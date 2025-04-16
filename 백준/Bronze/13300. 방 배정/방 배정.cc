#include <iostream>

using namespace std;

int main()
{
    int N, K;
    int arr[2][7] = {0,};
    int bang = 0;
    int sex, grade;
    
    cin >> N >> K;
    
    for(int i = 0; i < N; i++)
    {
        cin >> sex >> grade;
        arr[sex][grade]++;    //입력과 동시에 index 위치의 값을 더해 개수를 구하기
        //N개의 [성별][학년] 배열은 (조건문으로 인원을 세야하는데)
        //여자[1학년 수, 2학년 수, 3학년 수]
        //남자[1학년 수, 2학년 수, 3학년 수] 배열이 쉬움
    }
    
    for(int i =0; i < 2; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            bang += arr[i][j] / K;
            
            if(arr[i][j] % K != 0) bang++;
        }
    }
    
    cout << bang;
}