////µ¢Ä¡
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//int main()
//{
//	int N;
//	cin >> N;
//	vector<pair<int, int>> group;
//	for (int i = 0; i < N; i++) {
//		int a, b;
//		cin >> a >> b;
//		group.push_back(make_pair(a, b));
//	}
//	//vector<int> result;
//	for (int i = 0; i < N; i++) {
//		int count = 1;
//		for (auto& e : group) {
//			if (group[i].first < e.first && group[i].second < e.second)
//				count++;
//			
//			
//		}
//		cout << count << " ";
//	}
//
//
//	return 0;
//}