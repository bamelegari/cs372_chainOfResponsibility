//assemblers.h

#include "assemblyInterface.h"

#ifndef ASSEMBLERS_H
#define ASSEMBLERS_H


class partAAssembler : public assemblyInterface
{

public:
	void assemble(part p);

};

class partBAssembler : public assemblyInterface
{

public:
	void assemble(part p);

};

class partCAssembler : public assemblyInterface
{

public:
	void assemble(part p);

};

class partDAssembler : public assemblyInterface
{

public:
	void assemble(part p);

};


#endif