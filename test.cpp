//test.cpp
#include "assemblyInterface.h"
#include "assemblers.h"


int main()
{
	//it seems wierd to have all this set-up stuff out here in client-land,
	//but every example does it this way and trying to change it causes all
	//sorts of problems with circular dependency, pointers, etc.

	shared_ptr<assemblyInterface> partAPtr = make_shared<partAAssembler>();
	shared_ptr<assemblyInterface> partBPtr = make_shared<partBAssembler>();
	shared_ptr<assemblyInterface> partCPtr = make_shared<partCAssembler>();
	shared_ptr<assemblyInterface> partDPtr = make_shared<partDAssembler>();

	partAPtr->setNext(partBPtr);
	partBPtr->setNext(partCPtr);
	partCPtr->setNext(partDPtr);

	assemblyInterface i;
	i.setNext(partAPtr);


	//tests
	i.assemble('A');
	i.assemble('B');
	i.assemble('C');
	i.assemble('D');

	i.assemble('C');


	return 0;
}