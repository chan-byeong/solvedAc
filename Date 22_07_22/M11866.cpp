#define _CRT_SECURE_NO_WARNINGS
//요세푸스 문제
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	int point = 1;
	int arr[1001] = { 0 };
	vector<int> ans;
	int n, k;
	scanf("%d %d", &n, &k);
	
	int cnt = 0;
	while (true)
	{
		if (arr[point] != -1) {
			if (point == n) {
				point = 1;
				cnt++;
			}
			else {
				point++;
				cnt++;
			}
		}
		else {
			if (point == n) {
				point = 1;
			}
			else {
				point++;
			}
			
		}

		if (cnt == k - 1 && arr[point] != -1) {
			arr[point] = -1;
			ans.push_back(point);
			cnt = 0;
		}

		if (ans.size() == n) {
			break;
		}
	}

	printf("<");
	for (int i = 0; i < n; i++) {
		if (i == n - 1) {
			printf("%d>", ans[i]);
		}
		else {
			printf("%d, ", ans[i]);
		}
	}

	return 0;
}