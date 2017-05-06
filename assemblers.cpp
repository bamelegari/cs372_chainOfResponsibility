//assemblers.cpp

#include "assemblers.h"
#include <iostream>
using std::cout;
using std::endl;

void partAAssembler::assemble(char part)
{
	if (part == 'A')
		cout << "Assembling part A" << endl;
	else
	{
		cout << "Assembler A skipping" << endl;
		assemblyInterface::assemble(part);
	}
}

void partBAssembler::assemble(char part)
{
	if (part == 'B')
		cout << "Assembling part B" << endl;
	else
	{
		cout << "Assembler B skipping" << endl;
		assemblyInterface::assemble(part);
	}
}

void partCAssembler::assemble(char part)
{
	if (part == 'C')
		cout << "Assembling part C" << endl;
	else
	{
		cout << "Assembler C skipping" << endl;
		assemblyInterface::assemble(part);
	}
}

void partDAssembler::assemble(char part)
{
	if (part == 'D')
		cout << "Assembling part D" << endl;
	else
	{
		cout << "Assembler D skipping" << endl;
		assemblyInterface::assemble(part);
	}
}