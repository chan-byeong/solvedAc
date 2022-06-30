#include "PriorityQ.h"

void PriorityQ::insert(int x)
{
	a[++cnt] = x;
	int i = cnt;
	while (i != 1) {
		if (a[i / 2] <= a[i]) break;
		else {
			swap(a[i / 2], a[i]);
			i = i / 2;
		}
	}

}

void PriorityQ::dlt()
{
	int i = cnt;
	a[1] = a[i];
	int idxmin;
	while (i<=cnt)
	{
		if (a[i*2] <= a[i*2 + 1]) { idxmin = i * 2; }
		else { idxmin = i*2 + 1; }

		if (a[idxmin] >= a[i]) break;
		else {
			swap(a[idxmin],a[i]);
			i = idxmin;
		}
	}
	
}
