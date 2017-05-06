//assemblyInterface.cpp

#include "assemblyInterface.h"

assemblyInterface::assemblyInterface()
{
	_next = nullptr;
}


void assemblyInterface::setNext(unique_ptr<assemblyInterface> ptr)
{
	_next = ptr;
}

void assemblyInterface::assemble(part p)
{
	_next->assemble(p)
}