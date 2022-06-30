//해쉬 함수
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int r = 31;
	int M = 1234567891;

	int n;
	string str;
	cin >> n >> str;

	unsigned long H = 0;
	for (int i = 0; i < n; ++i) {
		int k;
		k = (str[i] - 96) * pow(r, i);
		H += k % M;
	}

	cout << H << "\n";

	return 0;
}