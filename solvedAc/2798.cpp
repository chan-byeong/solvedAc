//#include <iostream>
//
//using namespace std;
//
//int for_x3(int& N, int& M , int* arr) {
//	int result = 0;
//	for (int a = 0; a < N - 2; a++) {
//		for (int b = a + 1; b < N - 1; b++) {
//			for (int c = b + 1; c < N; c++) {
//				int temp = arr[a] + arr[b] + arr[c];
//				if (temp == M) return temp;
//				else if (temp > result && temp <= M) result = temp;
//			}
//		}
//	}
//	return result;
//}
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//
//	int* arr = new int[N];
//
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//
//	int result = for_x3(N, M,arr);
//
//	cout << result << endl;
//	
//
//	return 0;
//}