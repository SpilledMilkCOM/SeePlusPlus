#pragma once

#include "IMapper.h"

namespace MapperLib {
	class Shout //: public IMapper
	{
	public:
		void Map(const char* source, char** mapped);
		const char* ShoutOut();
	};
}