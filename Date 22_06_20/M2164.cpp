////ī��2
//
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int main()
//{
//	//1 vector ù��° ���� ������
//	//2 vector �ι�° ���� pushback and pop
//	//vector.size() == 1����
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