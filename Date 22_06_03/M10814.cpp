//나이순 정렬
#include <iostream>
#include <vector>
#include <string>
#include <tuple> 
#include <algorithm>

using namespace std;

bool compare(tuple<int, string, int>& a, tuple<int, string, int> b) {

	auto [age1, s1, id1] = a;
	auto [age2, s2, id2] = b;
	if (age1 < age2) { return true; }
	else if (age1 == age2) {
		if (id1 < id2) return true;
		else return false;
	}
	else return false;
}
int main()
{
	vector<tuple<int,string,int>> member;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;
		member.push_back(make_tuple(age, name,i));
	}

	sort(member.begin(), member.end(), compare);


	for (auto& [a, b,c] : member)
		cout << a << " " << b << "\n";

	return 0;
}