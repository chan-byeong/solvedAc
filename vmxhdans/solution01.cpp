#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "편 카 페 확" << endl;

	cout << "아/카푸/카/핫" << endl;
	while (true)
	{
		int n;

		cout << "1 가격확인 , 0 종료 :";
		cin >> n;
		if (n == 1) {
			string str;
			cout << "메뉴입력 : ";
			cin >> str;
			if (str == "아메리카노") {
				cout << "아메리카노 2500원 " << endl;
			}
			else if (str == "카푸치노") {
				cout << "카푸치노 2500원 " << endl;
			}
			else if (str == "카페라떼") {
				cout << "카페라떼 2500원 " << endl;
			}
			else if (str == "핫초코") {
				cout << "핫초코 3500원 " << endl;
			}
			else {
				cout << "없는 메뉴" << endl;
			}
		}
		else if (n == 0) {
			cout << "종료!" << endl;
			break;
		}

	}


	return 0;
}