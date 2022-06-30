#include "PriorityQMax.h"

void PriorityQMax::insert(int x)
{
	a[++cnt] = x;
	int i = cnt;
	while (i != 1) {
		if (a[i / 2] >= a[i]) break;
		else {
			swap(a[i / 2], a[i]);
			i = i / 2;
		}
	}

}

void PriorityQMax::dlt()
{
	int i = cnt;
	a[1] = a[i];
	int idxmax;
	while (i <= cnt)
	{
		if (a[i * 2] >= a[i * 2 + 1]) { idxmax = i * 2; }
		else { idxmax = i * 2 + 1; }

		if (a[idxmax] <= a[i]) break;
		else {
			swap(a[idxmax], a[i]);
			i = idxmax;
		}
	}

}
