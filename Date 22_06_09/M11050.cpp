////이항계수
////nCk
//
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//int fact(int x , int r=10) {
//
//	if (x == 1)
//		return 1;
//	else if (r == 1)
//		return x;
//	else {
//		return x * fact(x - 1,--r);
//	}
//}
//
//int main()
//{
//
//	int n, k;
//	cin >> n >> k;
//	if (n == k||k == 0) {
//		cout << 1 << "\n";
//	}
//	else {
//		int r = min(k, n - k);
//		int a = fact(n, r);
//		int b = fact(r);
//
//		int result = a / b;
//		
//		cout << result << "\n";
//	}
//
//	return 0;
//}