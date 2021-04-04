#include "pch.h"

#include "IMapper.h"

using namespace MapperLib;

namespace MapperLib {
	class Shout //: public IMapper
	{
	public:
		Shout() {}

		const char* ShoutOut() {
			return "SHOUT OUT!!!!";
		}

		virtual void Map(const char* source, char** mapped)
		{
			size_t sourceLen = strlen(source);

			*mapped = new char[sourceLen];

			strcpy_s(*mapped, sourceLen, source);

			for (size_t index = 0; index < sourceLen; index++)
			{
				(*mapped)[index] = toupper((*mapped)[index]);
			}
		}
	};
}