//2108 통계학

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <map>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> nums;
	vector<int> ans;

	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		nums.push_back(tmp);
	}

	//산술평균
	double sum = accumulate(nums.begin(), nums.end(), 0);
	sum = round(sum / N);
	ans.push_back(sum);


	//center val
	sort(nums.begin(), nums.end());
	int center = floor((double)N / 2);
	ans.push_back(nums[center]);

	/*
		//최빈값
		vector<pair<int,int>> t;

		for (int i = 0; i < N; i++) {
			int cnt = count(nums.begin(), nums.end(), nums[i]);
			t.push_back(make_pair(cnt, nums[i]));
		}

		sort(t.begin(), t.end(),
			[](pair<int, int> a, pair<int, int> b)
			{
				if (a.first < b.first) {
					return true;
				}
				else if (a.first == b.first) {
					if (a.second > b.second) return true;
					else return false;
				}
				else return false;
			}
			);

		//중복되는 값 제거
		t.erase( unique( t.begin(), t.end()) , t.end() );

		//cout << "=================" << endl;

		//for (auto e : t) {
		//	cout << "( " << e.first << " " << e.second << " ) ";
		//}

		//cout << "=================" << endl;


		int T = t.size();

		if (T == 1) {
			ans.push_back(t[T - 1].second);
		}
		else if (t[T - 1].first == t[T - 2].first) {
			ans.push_back(t[T - 2].second);
		}
		else {
			ans.push_back(t[T - 1].second);
		}
		*/

		//최빈값
	map<int, int> t;
	for (int i = 0; i < N; i++)
	{
		if (t[nums[i]]) t[nums[i]]++;
		else
			t[nums[i]] = 1;
	}
	vector<pair<int,int>> v(t.begin(), t.end());
	sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) { return a.second > b.second; });

	if (v.size() == 1) ans.push_back(v[0].first);
	else if (v[0].second == v[1].second) {
		ans.push_back(v[1].first);
	}
	else
		ans.push_back(v[0].first);

	

	//범위
	int nrange = nums[N - 1] - nums[0];
	ans.push_back(nrange);


	for (auto& e : ans)
		cout << e << "\n";

	return 0;
}