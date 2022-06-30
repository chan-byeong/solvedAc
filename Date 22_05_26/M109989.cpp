////수 정렬하기 3
//#include <iostream>
//
//using namespace std;
//
//
//int main() {
//	cin.tie(NULL);
//	cin.sync_with_stdio(false);
//
//	int n;
//	cin >> n;
//
//	int cnt[10001] = { 0, };
//	int max=0;
//	for (int i = 0; i < n; i++) {
//		int tmp;
//		cin >> tmp;
//		cnt[tmp - 1]++;
//		if (tmp > max) max = tmp;
//	}
//			
//	for (int i = 0; i < max; i++) {
//		for (int j = 0; j < cnt[i]; j++) {
//			cout << i + 1 << "\n";
//		}
//	}
//
//
//	return 0;
//}