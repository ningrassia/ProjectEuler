#include "stdafx.h"
#include "P3Solution.h"
#include <sstream>
bool isPrime(long long test) {
	//skip 2 and even numbers
	if (!(test % 2))
		return false;

	for (long long i = 3; i < int(sqrt(test)); i = i + 2) {
		if (!(test % i))
			return false;
	}
	return true;
}

std::string P3Solution::solve() {
	const long long number = 600851475143;
	long long test = int(sqrt(number)) + 1; //should be odd (yes this is hacky but w/e
	bool complete = false;
	std::stringstream answer;
	
	while (!complete && (test > 2)) {
		if (!(number % test))
			if (isPrime(test))
				complete = true;
		test = test - 2; //skip even numbers - they're definitely not prime!
	}
	answer << test;
	return answer.str();
}

P3Solution::P3Solution()
{
	init("P3", "bla");
}


P3Solution::~P3Solution()
{
}
