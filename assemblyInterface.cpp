//assemblyInterface.cpp

#include "assemblyInterface.h"

void setUpAssemblychain()
{
	unique_ptr<assemblyInterface> partAPtr = make_unique<partAAssembler>();
	unique_ptr<assemblyInterface> partBPtr = make_unique<partBAssembler>();
	unique_ptr<assemblyInterface> partCPtr = make_unique<partCAssembler>();
	unique_ptr<assemblyInterface> partDPtr = make_unique<partDAssembler>();

	partAAssembler->setNext(partBPtr);
	partBAssembler->setNext(partCPtr);
	partCAssembler->setNext(partDPtr);	
}

assemblyInterface::assemblyInterface()
{
	_next = NULL;
}


void assemblyInterface::setNext(unique_ptr<assemblyInterface> ptr)
{
	_next = ptr;
}


bool assemblyInterface::containsPart(vector<part> parts, part p)
{
	for (auto i : parts)
	{
		if (parts[i] == p)
			return true;
	}

	return false;
}