////우선순위 큐 2개를 활용해서 
////중간값 찾기
//#include <iostream>
//#include "PriorityQ.h"
//#include "PriorityQMax.h"
//
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	vector<int> ans;
//
//	PriorityQ right(N);
//	PriorityQMax left(N);
//
//	int lcnt = 0;
//	int rcnt = 0;
//
//	for (int i = 0; i < N; i++) {
//		int x;
//		cin >> x;
//		//pushQ(x, Right, Left);
//
//		if (lcnt == 0) {
//			left.insert(x);
//			lcnt++;
//		}
//		else if (lcnt == rcnt) {
//			if (x > right.top()) {
//				int y = right.top();
//				right.dlt();
//				left.insert(y);
//				right.insert(x);
//				lcnt++;
//			}
//			else {
//				left.insert(x);
//				lcnt++;
//			}
//		}
//		else {
//			if (x < left.top()) {
//				int y = left.top();
//				left.dlt();
//				right.insert(y);
//				left.insert(x);
//				rcnt++;
//			}
//			else {
//				right.insert(x);
//				rcnt++;
//			}
//
//		}
//
//		ans.push_back(left.top());
//	}
//
//	for (auto& e : ans)
//		cout << e << "\n";
//
//	return 0;
//}