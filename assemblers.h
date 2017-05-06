//assemblers.h
//represents the chained-together concrete handlers

#ifndef ASSEMBLERS_H
#define ASSEMBLERS_H

#include "assemblyInterface.h"

class partAAssembler : public assemblyInterface
{

public:
	using assemblyInterface::assemblyInterface; //inherit base c'tor
	void assemble(char part);

};

class partBAssembler : public assemblyInterface
{

public:
	using assemblyInterface::assemblyInterface;
	void assemble(char part);

};

class partCAssembler : public assemblyInterface
{

public:
	using assemblyInterface::assemblyInterface;
	void assemble(char part);

};

class partDAssembler : public assemblyInterface
{

public:
	using assemblyInterface::assemblyInterface;
	void assemble(char part);

};


#endif