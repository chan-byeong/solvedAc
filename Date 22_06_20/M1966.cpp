////프린터 큐
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//
//
//int main()
//{
//	int R;
//	cin >> R;
//	int i = 0;
//	vector<int> ans;
//
//	while (i < R)
//	{
//		int n, m;
//		cin >> n >> m;
//
//		//queue<int> printer;
//		vector<pair<int, int>> printer;
//
//		for (int i = 0; i < n; i++) {
//			int t;
//			cin >> t;
//			printer.push_back(make_pair(t, i));
//		}
//
//		int cnt = 1;
//		while (printer.size() != 0)
//		{
//			auto tmp = printer.front();
//
//			auto it = max_element(printer.begin(), printer.end());
//			if (tmp.first < (*it).first) {
//				printer.push_back(tmp);
//				printer.erase(printer.begin());
//			}
//			else {
//				if (tmp.second == m) {
//					ans.push_back(cnt);
//				}
//				cnt++;
//				printer.erase(printer.begin());
//			}
//		}
//
//		i++;
//	}
//
//	for (auto& e : ans)
//		cout << e << "\n";
//
//
//
//	return 0;
//}