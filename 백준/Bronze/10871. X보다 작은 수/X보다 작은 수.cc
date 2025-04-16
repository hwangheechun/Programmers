#include <iostream>

using namespace std;

int main()
{
    int N, X;
    int arr[10010];
    
    cin >> N >> X;

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    //다 입력을 받고 나서 
    for(int i = 0; i < N; i++)
    {
        if(arr[i] < X) cout << arr[i] << " ";
    }
}