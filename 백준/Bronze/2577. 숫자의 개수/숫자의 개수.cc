#include<iostream>
#include<algorithm>
using namespace std;
 
int main() 
{
    int A, B, C, total;
	cin >> A >> B >> C; 
    
    total = A * B * C;
    
    int count[10] = {0, }; //1000보다 작아서 10자리가 안 넘음
    
    while(total != 0)
    {
        count[total % 10]++;
        total /= 10;
    }
 
	for (int i = 0; i < 10; i++)
	{
		cout << count[i] << ' ';
	}
	
	return 0;
}