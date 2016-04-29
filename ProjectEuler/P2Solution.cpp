#include "stdafx.h"
#include "P2Solution.h"
#include <sstream>


P2Solution::P2Solution()
{
	init("Even Fibonacci numbers", "Find sum of even Fibonacci numbers < 4000000");
}


P2Solution::~P2Solution()
{
}

std::string P2Solution::solve()
{
	int sum, first, second, third;
	std::stringstream stream;
	first = 0;
	second = 1;
	third = 0;
	sum = 0;

	while (second < 4000000) {
		//compute third
		third = first + second;
		//check if even
		if (!(third % 2))
			sum += third;
		//set up for next
		first = second;
		second = third;
	}

	stream << sum;
	return stream.str();
}
