////좌표 정렬하기
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(pair<int,int> a , pair<int,int> b)
//{
//	if (a.first < b.first) return true;
//	else if (a.first == b.first) {
//		if (a.second < b.second) return true;
//		else return false;
//	}
//	else return false;
//}
//
//int main()
//{
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//
//	int N;
//	cin >> N;
//
//	vector<pair<int,int>> ans;
//
//	for (int i = 0; i < N; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		ans.push_back(make_pair(x, y));
//	}
//
//	sort(ans.begin(), ans.end(), compare);
//
//	for(auto& [a , b] : ans)
//		cout <<a<<" "<<b<<"\n";
//
//
//	return 0;
//}