//test.cpp
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

int main()
{
	setUpAssemblyChain();
	assemblyInterface::assemble(partA);
	assemblyInterface::assemble(partB);
	assemblyInterface::assemble(partC);
	assemblyInterface::assemble(partD);



	return 0;
}