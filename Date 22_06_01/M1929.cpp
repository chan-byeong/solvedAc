//소수구하기 2트
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;;
	cin >> N >> M;
	bool flag = true;
	for (int i = N; i <= M; i++) {
		for (int j = 2; j <= sqrt(N); j++) {
			if (i % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag) cout << i << "\n";
	}
	

	return 0;
}