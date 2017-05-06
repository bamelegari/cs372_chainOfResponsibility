//assemblyInterface.cpp

#include "assemblyInterface.h"

assemblyInterface::assemblyInterface()
{
	_next = nullptr;
}

void assemblyInterface::setNext(shared_ptr<assemblyInterface> ptr)
{
	_next = ptr;
}

void assemblyInterface::assemble(char part)
{
	_next->assemble(part);
}