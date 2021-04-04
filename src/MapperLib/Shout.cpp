#include "pch.h"

#include "Shout.h"

using namespace MapperLib;

/// <summary>
/// Note that these methods are defined statically.
/// The header file defines them as in the "Shout" class
/// </summary>

namespace MapperLib {

	int _member = 0;

	const char* Shout::ShoutOut() {
		return "SHOUT OUT from STATIC MapperLib!!!!";
	}

	void Shout::Map(const char* source, char** mapped)
	{
		size_t sourceLen = strlen(source) + 1;		// Include terminator

		*mapped = new char[sourceLen];

		strcpy_s(*mapped, sourceLen, source);

		for (size_t index = 0; index < sourceLen; index++)
		{
			(*mapped)[index] = toupper((*mapped)[index]);
		}
	}
}