//assemblers.cpp

#include "assemblers.h"



void partAAssembler::assemble(vector<part> parts)
{
	if containsPart(parts, partA)
		cout << "Assembling part A" << endl;
	else
		cout << "Assembler A skipping" << endl;
}

void partBAssembler::assemble(vector<part> parts)
{
	if containsPart(parts, partB)
		cout << "Assembling part B" << endl;
	else
		cout << "Assembler B skipping" << endl;
}

void partCAssembler::assemble(vector<part> parts)
{
	if containsPart(parts, partC)
		cout << "Assembling part C" << endl;
	else
		cout << "Assembler C skipping" << endl;
}

void partDAssembler::assemble(vector<part> parts)
{
	if containsPart(parts, partD)
		cout << "Assembling part D" << endl;
	else
		cout << "Assembler D skipping" << endl;
}