//좌표 정렬하기 2
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second < b.second) return true;
	else if (a.second == b.second) {
		if (a.first < b.first) return true;
		else return false;
	}
	else return false;
}

int main()
{
	int N;
	cin >> N;

	vector<pair<int, int>> ans;

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		ans.push_back(make_pair(a, b));
	}

	sort(ans.begin(), ans.end(), compare);

	for (auto& [a,b] : ans)
		cout << a<<" " << b << "\n";

	return 0;
}