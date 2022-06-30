#pragma once
#include <vector>
#include <iostream>
using namespace std;

class PriorityQ {
protected:

	vector<int> a;
	int cnt;

public:
	PriorityQ(int n)
		:a(n), cnt(0)
	{
	}

	void virtual insert(int x);

	int top() { return a[1]; }

	void virtual dlt();

	int getCnt() { return cnt; }

	void print() {
		for (auto& e : a) {
			cout << e << " ";
		}
		cout << endl;
	}
};