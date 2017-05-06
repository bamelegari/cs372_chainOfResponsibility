//assemblyInterface.h

#include <memory>
using std::unique_ptr;
using std::make_unique;
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#ifndef ASSEMBLYINTERFACE_H
#define ASSEMBLYINTERFACE_H


//forward declarations of assemblers to avoid circular dependency.
class partAAssembler;
class partBAssembler;
class partCAssembler;
class partDAssembler;

//out here so that client code has access when including
//assemblyInterface.h
enum part {partA, partB, partC, partD};

class assemblyInterface
{
private:
	assemblyInterface();
	virtual ~assemblyInterface() {}

protected:
	unique_ptr<assemblyInterface> _next;
	void setNext (unique_ptr<assemblyInterface> ptr);

public:	
	virtual void assemble(part p);

};


#endif