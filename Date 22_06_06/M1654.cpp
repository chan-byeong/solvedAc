////랜선만들기
////x의 값을 이진탐색을 통해 찾아야 시간초과가 안뜬다.
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int K,N;
//	cin >> K >> N;
//	if (K > N) return -1;
//
//	vector<int> ans;
//	for (int i = 0; i < K; i++) {
//		int t;
//		cin >> t;
//		ans.push_back(t);
//	}
//	
//	sort(ans.begin(), ans.end(),greater<>());
//
//	long long l = 1;
//	long long r = ans[0];
//	
//	while (l <= r) {
//		long long result = 0;
//		long long m = (l + r) / 2;
//
//		for (int i = 0; i < K; i++) {
//			result += ans[i] / m;
//		}
//		if (result >= N) { l = m + 1; }
//		else if (result < N) { r = m - 1; }
//
//	}
//	cout << r << "\n";
//
//	return 0;
//}