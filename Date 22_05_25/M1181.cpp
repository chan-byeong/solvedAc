//단어 정렬
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>

using namespace std;

bool compare(string& a , string& b) {
	//if (a.size() < b.size()) return true;
	//else if (a.size() == b.size()) return a < b ? true : false;
	//else return false;

	return a.size() < b.size() ? true : ((a.size() == b.size()) ? (a < b ? true : false) : false);

}

int main()
{
	unsigned short N;
	cin >> N;
	int i = 0;

	vector<string> group;

	while (i < N) {
		string str;
		cin >> str;
		bool flag = true;
		for (auto& e : group)
			if (e == str) {
				flag = false;
				break;
			}
		if (flag) group.push_back(str);
		i++;
	}
	
	sort(group.begin(), group.end(), compare);

	for (auto& e : group) 
		cout << e << "\n";

	return 0;
}