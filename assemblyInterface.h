//assemblyInterface.h
//represents the forward-facing interface called by client

#ifndef ASSEMBLYINTERFACE_H
#define ASSEMBLYINTERFACE_H

#include <memory>
using std::shared_ptr;
using std::make_shared;


class assemblyInterface
{
protected:
	shared_ptr<assemblyInterface> _next;

public:	
	void setNext (shared_ptr<assemblyInterface> ptr);
	explicit assemblyInterface(); //explicit so it can be inherited by derived classes
	virtual ~assemblyInterface() {}
	virtual void assemble(char part);

};


#endif