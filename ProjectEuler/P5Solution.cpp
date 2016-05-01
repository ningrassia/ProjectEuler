#include "stdafx.h"
#include "P5Solution.h"
#include <sstream>
#include <iostream>

bool isMultiple(int num, int max)
{
	for (int i = 3; i <= max; i++) //skip 2, only check even numbers
	{
		if ((num%i) != 0)
			return false;
	}
	return true;
}

std::string P5Solution::solve()
{
	std::stringstream ans;
	int num = 2520; //should be greater than this, probably
	bool done = false;
	do
	{
		num += 2;
		done = isMultiple(num, 20);

	} while (!done);
	
	ans << num;
	return ans.str();
}

P5Solution::P5Solution()
{
	init("Smallest multiple", "Blah blah");
}


P5Solution::~P5Solution()
{
}
