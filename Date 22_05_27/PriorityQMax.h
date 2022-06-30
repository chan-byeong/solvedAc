#pragma once
#include "PriorityQ.h"

class PriorityQMax : public PriorityQ
{

public:
	PriorityQMax(int n )
		:PriorityQ(n)
	{}

	void virtual insert(int x);

	int top() { return a[1]; }

	void virtual dlt();
};

