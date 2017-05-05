//assemblers.h

#include "assemblyInterface.h"

#ifndef ASSEMBLERS_H
#define ASSEMBLERS_H


class partAAssembler : assemblyInterface
{

public:
	void assemble(vector<part> parts);

};

class partBAssembler : assemblyInterface
{

public:
	void assemble(vector<part> parts);

};

class partCAssembler : assemblyInterface
{

public:
	void assemble(vector<part> parts);

};

class partDAssembler : assemblyInterface
{

public:
	void assemble(vector<part> parts);

};


#endif