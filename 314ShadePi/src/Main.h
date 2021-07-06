#pragma once
#include "SPdataManipulation.h"
#include "SPstdMacros.h"

template<typename T>
class Main
{
private:
	T m_Name;
public:
	Main(T);

	int fMain(const char*);
};
