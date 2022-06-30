//분해합 재도전
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;


int main()
{
	int N;
	cin >> N;
	int sum, temp,i;
	for (i = 1; i < N; i++) {
		sum = i;
		temp = i;
		while (temp > 0) {
			sum += temp % 10;
			temp /= 10;
		}
		if (sum == N) {
			cout << i << endl;
			break;
		}
	}
	if (i == N) {
		cout << 0 << endl;
	}
	

	return 0;
}