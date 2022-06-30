//나무 자르기
//랜선자르기랑 유사 이것도 바이너리로 해보자
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<int> ans;

	for (int i = 0; i < N; i++)
	{
		int t;
		cin >> t;
		ans.push_back(t);
	}
	sort(ans.begin(), ans.end(), greater<int>());

	long long l = 1;
	long long r = ans[0];

	while (l <= r) {
		long long cnt = 0;
		long long m = (l + r) / 2;

		for (int i = 0; i < N; i++) {
			long long tmp = ans[i] - m;
			if (tmp > 0) {
				cnt += tmp;
			}
			else cnt += 0;
		}

		if(cnt >= M){
			l = m + 1;
		}
		else if (cnt < M) {
			r = m - 1;
		}

	}

	cout << r << "\n";



	return 0;
}