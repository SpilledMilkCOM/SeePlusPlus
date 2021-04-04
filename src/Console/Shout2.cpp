#include "pch.h"

#include <combaseapi.h>

class Shout2 {
public:
	Shout2() {}

	const char* ShoutOut() {
		return "SHOUT OUT!!!!";
	}

	void Map(const char* source, char** mapped)
	{
		size_t sourceLen = strlen(source) + 1;		// Add in terminator

		*mapped = new char[sourceLen];

		strcpy_s(*mapped, sourceLen, source);

		for (size_t index = 0; index < sourceLen; index++)
		{
			(*mapped)[index] = toupper((*mapped)[index]);
		}
	}
};