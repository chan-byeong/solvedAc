//ť

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int queue[10001];
int st = 0;
int cnt = 0;

void push(int& x) {
	queue[cnt++] = x;
}

int pop() {
	if (st >= cnt) return -1;
	return queue[st++];
}

int size() {
	return cnt - st;
}

int empty() {
	return cnt == st;
}

int front() {
	if (empty()) return -1;
	else return queue[st];
}

int back() {
	if (empty()) return -1;
	else return queue[cnt-1];
}

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> ans;
	
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "push") {
			int x;
			cin >> x;
			push(x);
		}
		else if (str == "pop") {
			ans.push_back(pop());
		}
		else if (str == "size") {
			ans.push_back(size());
		}
		else if (str == "empty") {
			ans.push_back(empty());
		}
		else if (str == "front") {
			ans.push_back(front());
		}
		else if (str == "back") {
			ans.push_back(back());
		}

	}
	for (auto& e : ans)
		cout << e << "\n";




	return 0;
}