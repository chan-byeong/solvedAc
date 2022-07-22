//숫자 카드 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	int i,n,m;
	scanf("%d", &n);
	map<int, int> mm;

	for (i = 0; i < n; i++) {
		int tmp;
		scanf("%d", &tmp);
		mm[tmp]++;
	}

	scanf("%d", &m);
	vector<int> v(m);
	for (i = 0; i < m; i++) {
		scanf("%d", &v[i]);
	}

	for (i = 0; i < m; i++)
	{
		printf("%d ", mm[v[i]]);
	}



	return 0;
}