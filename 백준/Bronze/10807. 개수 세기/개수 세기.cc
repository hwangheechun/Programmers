#include<iostream>

using namespace std;
 
int main() 
{
    int N, v;
    int arr[101];
    int count = 0;
	cin >> N; 
    
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    cin >> v;
    
	for (int i = 0; i < N; i++)
	{
        if(arr[i] == v)
		    count++;
	}
    
    cout << count;
}