////스택 수열
//#include <iostream>
//#include <stack>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//	
//	vector<int> arr;
//	vector<string> ans;
//
//	for (int i = 0; i < N; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		arr.push_back(tmp);
//	}
//
//	stack<int> stk;
//	
//	int i = 0;
//	int n = 1;
//	stk.push(0);
//
//	while (true)
//	{
//		if (i == N) break;
//		if (arr[i] == stk.top()) {
//			stk.pop();
//			ans.push_back("-");
//			i++;
//		}
//		else if (arr[i] > stk.top()) {
//			stk.push(n++);
//			ans.push_back("+");
//		}
//		else {
//			cout << "NO" << endl;
//			return 0;
//		}
//
//
//	}
//	
//	for (auto& e : ans)
//		cout << e << "\n";
//
//	return 0;
//}