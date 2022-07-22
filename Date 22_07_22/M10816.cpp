//숫자 카드 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int i,n,m;

	scanf("%d", &n);
	vector<int> v1(n);
	for (i = 0; i < n; i++) {
		scanf("%d", &v1[i]);
	}

	scanf("%d", &m);
	vector<int> v2(m);
	for (i = 0; i < m; i++) {
		scanf("%d", &v2[i]);
	}

	sort(v1.begin(), v1.end());

	for (i = 0; i < m; i++)
	{
		auto low = lower_bound(v1.begin(), v1.end(), v2[i]);
		auto up = upper_bound(v1.begin(), v1.end(), v2[i]);
		int cnt = up - low;

		printf("%d ", cnt);
	}


	return 0;
}