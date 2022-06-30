//#include <iostream>
//
//using namespace std;
//
//int calRoomNum(int& H, int& W, int& N)
//{
//	if (N > W * H) return -1;
//
//	int R;
//	int k = N / H + 1; //È£¼ö
//	int r = N % H; //Ãþ¼ö
//	if (r == 0) {
//		r = H;
//		k -= 1;
//	}
//
//	R = r * 100 + k;
//
//	return R;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	int** arr = new int*[T];
//
//	for (int j = 0; j < T; j++) {
//		arr[j] = new int[4];
//		for (int i = 0; i < 3; i++) {
//			cin >> arr[j][i];
//		}
//		arr[j][3] = calRoomNum(arr[j][0], arr[j][1], arr[j][2]);
//	}
//
//	for (int i = 0; i < T; i++)
//		cout << arr[i][3] << endl;
//
//
//	return 0;
//}