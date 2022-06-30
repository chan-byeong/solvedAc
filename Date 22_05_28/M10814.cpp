//나이순 정렬
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


using namespace std;

int main()
{
	int N;

	cin >> N;

	pair<int, string>* arr = new pair<int, string>[N];

	for (int i = 0; i < N; i++) {
		int n;
		string k;
		cin >> n >> k;
		arr[i] = make_pair(n, k);
	}

	for (int i = 0; i < N-1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i].first > arr[j].first) {
				auto tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			else if (arr[i].first == arr[j].first) {
				continue;
			}
		}
	}

	for (int i = 0; i < N; i++)
		cout << arr[i].first << arr[i].second << "\n";

	return 0;
}