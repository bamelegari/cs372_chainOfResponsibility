//assemblyInterface.h

#include <memory>
using std::unique_ptr;
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#ifndef ASSEMBLYINTERFACE_H
#define ASSEMBLYINTERFACE_H


//out here so that client code has access when including
//assemblyInterface.h
enum part {partA, partB, partC, partD};

//helper function to create the assembly chain.
//it feels weird to have it out here, but the alternative
//was to make the client write it explicitly.
//This way, the client just calls this function to set everything up.
void setUpAssemblyChain();


class assemblyInterface
{
private:
	assemblyInterface();
	virtual ~assemblyInterface() {}

protected:
	unique_ptr<assemblyInterface> _next;

	void setNext (unique_ptr<assemblyInterface> ptr);

	//helper function, determines existence of a certain part in the set of parts 
	bool containsPart(vector<part> parts, part p);

public:	
	virtual void assemble(vector<part> parts) = 0;

};


#endif