#pragma once
#include <string>

#ifdef HOMEWORK102DYNAMICLIBRARY_EXPORTS
#define HOMEWORK102DYNAMICLIBRARY_API __declspec(dllexport)
#else
#define HOMEWORK102DYNAMICLIBRARY_API __declspec(dllimport)
#endif

namespace lib
{
	class Leaver
	{
	public:
		HOMEWORK102DYNAMICLIBRARY_API std::string  leaver(std::string name);
	};
}