//deque
#include <iostream>
#include <vector>

using namespace std;

int deque[10001];

int fnt=0, bck=1;

void push_back(int& x) {
	if (bck == 10000) {
		deque[bck] = x;
		bck = 0;
	}
	else
	{
		deque[bck++] = x;
	}
}
}

void push_front(int& x) {
	if (fnt == 0) {
		deque[fnt] = x;
		fnt = 10000;
	}
	else {
		deque[fnt--] = x;
	}
}

int pop_front() {
	if (fnt == 10000) {
		fnt = 0;
		return deque[fnt];
	}
	else {
		return deque[++fnt];
	}
}

int pop_back()
{
	if (bck == 0) {
		bck = 10000;
		return deque[bck];
	}
	else {
		return deque[--bck];
	}
}

int size() {

}

int empty() {

}

int front()
{

}

int back() {

}



int main()
{

	int N;
	cin >> N;

	vector<int> ans;
	
	


	return 0;
}