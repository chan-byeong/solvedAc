////최대공약수와 최소공배수
//#include <iostream>
//
//using namespace std;
//
////최대공약수 - 유클리드 호제법
//int gcd(int a, int b) {
//	return (a % b == 0) ? b : gcd(b, a % b);
//}
//
////최소공배수
//int lcm(int a, int b) {
//	return a * b / gcd(a, b);
//}
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//
//	cout << gcd(N, M) << "\n";
//	cout << lcm(N, M) << "\n";
//
//	return 0;
//}