#include <iostream>

#include "MapperLib.h"
#include "Shout.h"
#include "Shout2.h"

using namespace MapperLib;

class Shout3
{
public:
	Shout3() {}

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

int main(int argc, char* argv[])
{
    std::cout << "Hello World!\n";

    std::cout << "argc=" << argc << "\n";

	for (int index = 0; index < argc; index++)
	{
		std::cout << "argv=" << argv[index] << "\n";
	}

	// proves that the static library is linked in.

	std::cout << fnMapperLib() << "\n";

	Shout mapper;

	std::cout << mapper.ShoutOut() << "\n";

	for (int index = 1; index < argc; index++)
	{
		char* mapped = NULL;

		mapper.Map(argv[index], &mapped);

		std::cout << "argv SHOUT=" << mapped << "\n";

		delete(mapped);
	}

	Shout2* mapper2 = new Shout2();

	std::cout << mapper2->ShoutOut() << "\n";

	for (int index = 1; index < argc; index++)
	{
		char* mapped = NULL;

		mapper2->Map(argv[index], &mapped);

		std::cout << "argv SHOUT=" << mapped << "\n";

		delete(mapped);
	}
}