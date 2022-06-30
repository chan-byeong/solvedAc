//제로가 나오면 이전 숫자 지우기

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int k;
	cin >> k;
	
	stack<int> ans;
	for (int i = 0; i < k; i++) {
		int t;
		cin >> t;
		if (t == 0) { ans.pop(); }
		else ans.push(t);
	}

	int result=0;
	while (!ans.empty()) {
		result += ans.top();
		ans.pop();
	}
	cout << result << "\n";

	return 0;
}

