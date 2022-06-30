//∫Œ≥‡»∏¿ÂπÆ¡¶
#include <iostream>
#include <vector>
using namespace std;

int getNum() {
	int k, n;
	cin >> k >> n;
	int** apt = new int* [k + 1];
	for (int i = 0; i < k + 1; i++)
		apt[i] = new int[n];

	//0√˛ √ ±‚»≠
	for (int i = 0; i < n; i++) {
		apt[0][i] = i + 1;
	}

	for (int i = 1; i < k + 1; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0) apt[i][j] = 1;
			else {
				apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
			}
		}
	}
	int tmp = apt[k][n - 1];

	for (int i = 0; i < k + 1; i++)
		delete[] apt[i];
	delete[] apt;

	return tmp;

}


int main()
{
	int a, k,n;
	cin >> a;
	vector<int> result;
	for (int i = 0; i < a; i++)
		result.push_back(getNum());
	for (auto& e : result)
		cout << e << endl;
	

	return 0;
}