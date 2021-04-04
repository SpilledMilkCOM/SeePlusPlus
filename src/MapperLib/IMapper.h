#pragma once

#include <combaseapi.h>

namespace MapperLib {
	interface IMapper
	{
		virtual void Map(const char* source, char** mapped) = 0;
	};
}