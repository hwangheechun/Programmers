#include <iostream>
using namespace std;

int main()
{
    int N;
    int arr[10] = {0, }; 
    int max = 0;
    cin >> N;
    
    while(N != 0)
    {          
        arr[N % 10]++;
        N /= 10;
    }
    
    arr[6] += arr[9];
    
    if (arr[6] % 2 == 0)
    arr[6] /= 2;
    else
    {
        arr[6] /= 2;
        arr[6]++;
    }
    
    for(int i = 0; i < 9; i++)
    {
        if(arr[i] >= max)
            max = arr[i];
    }
    
    cout << max;
}