////¼ö Ã£±â
//#include <iostream>
//#include <set>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	set<int> ans;
//	vector<int> printAns;
//
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		int a;
//		cin >> a;
//		ans.insert(a);
//	}
//	int M;
//	cin >> M;
//	for (int i = 0; i < M; i++)
//	{
//		int b;
//		cin >> b;
//		auto iter = ans.find(b);
//		if (iter != ans.end()) printAns.push_back(1);
//		else printAns.push_back(0);
//	}
//
//	for (auto& e : printAns)
//		cout << e << "\n";
//
//	return 0;
//}