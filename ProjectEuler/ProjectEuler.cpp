// ProjectEuler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PESolution.h"
#include "PESolutionList.h"
#include <iostream>
#include <vector>
#include <windows.h>

void gen_solution_list(std::vector<PESolution*>& solutions) {
	//add solutions to list here.
	solutions.emplace_back(new P1Solution());
	solutions.emplace_back(new P2Solution());
	solutions.emplace_back(new P3Solution());
	solutions.emplace_back(new P4Solution());
	solutions.emplace_back(new P5Solution());
	solutions.emplace_back(new P6Solution());
	solutions.emplace_back(new P7Solution());
	solutions.emplace_back(new P8Solution());
	return;
}

void free_solutions(std::vector<PESolution*>& solutions) {
	for each(PESolution* var in solutions)
		delete var;
}


int main()
{
	int selection = 1;

	//generate vector of solutions
	std::vector<PESolution*> solutions;
	gen_solution_list(solutions);

	std::cout << "Welcome to Project Euler solutions - which solution do you want to run?" << std::endl;
	std::cout << "0: Quit" << std::endl;
	int i = 1;
	for each (PESolution* var in solutions)
	{
		std::cout << i++ << ": " << var->getName() << std::endl;
	}

	while (1) {
		std::cin >> selection;
		if (selection == 0)
			break;

		std::cout << "The solution is " << solutions[selection - 1]->solve() << std::endl;
		std::cout << "Which solution do you want to run?" << std::endl;
	}
	free_solutions(solutions);
}