////소수 구하기 - 에라토스테네스의 체
////m ,n 사이의 소수구하기
//
//#include <iostream>
//#include <vector>
//#include <math.h>
//
//using namespace std;
//
//bool isPrime(int n)
//{
//	if (n == 1) return false;
//	if (n == 2 ) return true;
//	for (int i = 2; i < sqrt(n)+1; i++) {
//		if (n % i == 0) return false;
//	}
//
//	return true;
//}
//
//int main()
//{
//	int M, N;
//	cin >> M >> N;
//
//	for (int i = M; i < N + 1; i++) 
//	{
////		cout << i << endl;
//		if (isPrime(i))
//			cout << i << "\n";
//	}
//	
//
//	return 0;
//}