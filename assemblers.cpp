//assemblers.cpp

#include "assemblers.h"



void partAAssembler::assemble(part p)
{
	if (p == partA)
		cout << "Assembling part A" << endl;
	else
	{
		cout << "Assembler A skipping" << endl;
		assemblyInterface::assemble(parts);
	}
}

void partBAssembler::assemble(part p)
{
	if (p == partB)
		cout << "Assembling part B" << endl;
	else
	{
		cout << "Assembler B skipping" << endl;
		assemblyInterface::assemble(parts);
	}
}

void partCAssembler::assemble(part p)
{
	if (p == partC)
		cout << "Assembling part C" << endl;
	else
	{
		cout << "Assembler C skipping" << endl;
		assemblyInterface::assemble(parts);
	}
}

void partDAssembler::assemble(part p)
{
	if (p == partD)
		cout << "Assembling part D" << endl;
	else
	{
		cout << "Assembler D skipping" << endl;
		assemblyInterface::assemble(parts);
	}
}