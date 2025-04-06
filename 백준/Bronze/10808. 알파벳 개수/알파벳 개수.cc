#include<iostream>
#include<algorithm>
#define ALPHABET 26
using namespace std;
 
int main() 
{
	string S; // 단어 S
	cin >> S; 
 
	int alphabet[ALPHABET] = { 0, };      // 배열의 요소를 모두 0으로 초기화;
 
	for (int i = 0; i < S.length(); i++)
	{
		alphabet[S[i] - 'a'] += 1;    //a와의 차이만큼이 a부터의 순서
	}
 
	for (int i = 0; i < ALPHABET; i++)
	{
		cout << alphabet[i] << ' ';
	}
	
	return 0;
}