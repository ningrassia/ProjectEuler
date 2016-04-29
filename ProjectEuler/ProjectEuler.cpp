// ProjectEuler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PESolution.h"
#include "PESolutionList.h"
#include <iostream>
#include <vector>

void gen_solution_list(std::vector<PESolution*>& solutions) {
	//add solutions to list here.
	solutions.emplace_back(new P1Solution());
	solutions.emplace_back(new P2Solution());
	return;
}

void free_solutions(std::vector<PESolution*>& solutions) {
	for each(PESolution* var in solutions)
		delete var;
}


int main()
{
	int selection;

	//generate vector of solutions
	std::vector<PESolution*> solutions;
	gen_solution_list(solutions);

	std::cout << "Welcome to Project Euler solutions - which solution do you want to run?" << std::endl;
	//for each Solution,
	int i = 0;
	for each (PESolution* var in solutions)
	{
		std::cout << i++ << ": " << var->getName() << std::endl;
	}

	std::cin >> selection;

	std::cout << "The solution is " << solutions[selection]->solve() << std::endl;

	free_solutions(solutions);

	while (1); //force user to quit
}