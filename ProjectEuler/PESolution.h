#pragma once

#include <string>
#include "PEUtil.h"
class PESolution
{
protected:
	std::string name;
	std::string description;
	void PESolution::init(std::string name, std::string description) {
		this->name = name;
		this->description = description;
	}

public:
	PESolution();
	~PESolution();

	virtual std::string PESolution::solve() =0;
	std::string getName() { return this->name; };
	std::string getDescription() { return this->description; };

};

