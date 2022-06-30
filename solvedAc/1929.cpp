//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	if (N == 2) { cout << 2 << "\n"; N++; }
//	
//	for (; N < M; N += 2) {
//		if (N % 2 == 0) N += 1;
//		for (int i = 3; i < N / 2; i += 2) {
//			if (N % i == 0) { continue; }
//			else { cout << N << "\n"; }
//		}
//	}
//	
//
//	return 0;
//}