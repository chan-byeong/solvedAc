
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<int> deque(10001);
int fnt = 5000;
int bck = 5000;
int cnt = 0;

vector<int> ans;

bool empty()
{
	if (fnt == bck && cnt == 0) {
		return true;
	}
	else return false;
}

void push_front()
{
	int x;
	scanf("%d", &x);
	
	if (fnt == 0) {
		fnt = 10000;
		deque[fnt] = x;
		cnt++;
	}
	else {
		deque[--fnt] = x;
		cnt++;
	}
}

void push_back()
{
	int x;
	scanf("%d", &x);

	if (bck == 10000) {
		bck = 0;
		deque[bck] = 0;
		cnt++;
	}
	else {
		deque[bck++] = x;
		cnt++;
	}
}

int pop_front()
{
	int x;
	scanf("%d", &x);

	if (empty()) {
		return -1;
	}
	else {
		cnt--;
		return deque[fnt++];
		
	}
}

int pop_back()
{
	int x;
	scanf("%d", &x);

	if (empty()) {
		return -1;
	}
	else {
		cnt--;
		return deque[--bck];	
	}
}

int size()
{
	return bck - fnt;
}

int front()
{
	if (empty())
		return -1;
	else
		return deque[fnt];
}

int back()
{
	if (empty())
		return -1;
	else
		return deque[bck-1];
}

void funcStarter(string str)
{
	if (str == "push_front")
	{
		push_front();
	}
	else if (str == "push_back")
	{
		push_back();
	}
	else if (str == "pop_front")
	{
		//printf("%d",pop_front());
		ans.push_back(pop_front());
			
	}
	else if (str == "pop_back")
	{
		//printf("%d",pop_back());
		ans.push_back(pop_back());
	}
	else if (str == "size")
	{
		//printf("%d",size());
		ans.push_back(size());
	}
	else if (str == "empty")
	{
		//printf("%b",empty());
		ans.push_back(empty());
	}
	else if (str == "front")
	{
		//printf("%d",front());
		ans.push_back(front());
	}
	else if (str == "back")
	{
		//printf("%d",back());
		ans.push_back(back());
	}
}

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		funcStarter(str);
	}

	for (int& e : ans)
		printf("%d\n", e);

	return 0;
}