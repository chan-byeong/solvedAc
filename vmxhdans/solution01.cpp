#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "�� ī �� Ȯ" << endl;

	cout << "��/īǪ/ī/��" << endl;
	while (true)
	{
		int n;

		cout << "1 ����Ȯ�� , 0 ���� :";
		cin >> n;
		if (n == 1) {
			string str;
			cout << "�޴��Է� : ";
			cin >> str;
			if (str == "�Ƹ޸�ī��") {
				cout << "�Ƹ޸�ī�� 2500�� " << endl;
			}
			else if (str == "īǪġ��") {
				cout << "īǪġ�� 2500�� " << endl;
			}
			else if (str == "ī���") {
				cout << "ī��� 2500�� " << endl;
			}
			else if (str == "������") {
				cout << "������ 3500�� " << endl;
			}
			else {
				cout << "���� �޴�" << endl;
			}
		}
		else if (n == 0) {
			cout << "����!" << endl;
			break;
		}

	}


	return 0;
}