//우선순위 큐 

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	priority_queue<int> left;
	priority_queue<int,vector<int>, greater<int>> right;
	vector<int> ans;
	
	int N;
	cin >> N;

	int lcnt = 0;
	int rcnt = 0;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		//pushQ(x, Right, Left);

		if (lcnt == 0) {
			left.push(x);
			lcnt++;
		}
		else if (lcnt == rcnt) {
			if (x > right.top()) {
				int y = right.top();
				right.pop();
				left.push(y);
				right.push(x);
				lcnt++;
			}
			else {
				left.push(x);
				lcnt++;
			}
		}
		else {
			if (x < left.top()) {
				int y = left.top();
				left.pop();
				right.push(y);
				left.push(x);
				rcnt++;
			}
			else {
				right.push(x);
				rcnt++;
			}

		}

		ans.push_back(left.top());
	}
	for (auto& e : ans)
		cout << e << "\n";
	return 0;
}