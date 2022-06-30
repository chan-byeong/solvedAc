//≈Î∞Ë«–
#include <iostream>
#include <math.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> ans(n);
	if (n % 2 == 0) return -1;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		ans.push_back(tmp);
	}

	double a = accumulate(ans.begin(), ans.end(),0);
	a = round(a / n);
	
	sort(ans.begin(), ans.end(), [](int a, int b) {return a > b; });
	int b = ans[ceil(double(n) / 2.0)];

	int c = 0;

	int d = abs(ans[0] - ans[n - 1]);


	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << d << "\n";

	return 0;
}