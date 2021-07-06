#include "pch.h"
#include "framework.h"
#include "SPdataManipulation.h"

void initSPDataManipulation(const char* _projName)
{
	initSPstdMacros("SPdataManipulation");
	std::cout << "314ShadePi Data Manipulation Library Loaded In: " << _projName << std::endl;
}
