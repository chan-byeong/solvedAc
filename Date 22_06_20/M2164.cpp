////카드2
//
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int main()
//{
//	//1 vector 첫번째 원소 버리기
//	//2 vector 두번째 원소 pushback and pop
//	//vector.size() == 1까지
//
//	int n;
//	cin >> n;
//
//	queue<int> ans;
//
//	for (int i = 1; i < n + 1; i++) {
//		ans.push(i);
//	}
//
//	while (ans.size() != 1) {
//		ans.pop();
//
//		int tmp = ans.front();
//		ans.push(tmp);
//		ans.pop();
//
//	}
//
//	cout << ans.front() << "\n";
//
//
//	return 0;
//}