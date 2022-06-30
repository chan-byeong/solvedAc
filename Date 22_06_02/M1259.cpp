//ÆÓ¸°µå·Ò¼ö
#include <iostream>
#include <string>

using namespace std;

int main()
{
	while (true)
	{
		string str;
		cin >> str;

		if (str == "0") break;
		int len = str.length();
		 
		int i = 0;
		for (i = 0; i < len / 2; i++) {
			if (str[i] != str[len - 1 - i]) {
				cout << "no" << "\n";
				break;
			}
		}
		if (i == len / 2) cout << "yes" << "\n";
		

	}


	return 0;
}