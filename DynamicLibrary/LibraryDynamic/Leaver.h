#include <iostream>
#pragma once

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif


DLL_API class Leaver {
public:
	DLL_API std::string leav(std::string name);
};