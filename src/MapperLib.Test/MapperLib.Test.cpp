#include "pch.h"
#include "CppUnitTest.h"

#include "../MapperLib/MapperLib.h"
#include "../MapperLib/Shout.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace MapperLib;			// using so the MapperLib:: prefix isn't used everywhere.

namespace MapperLibTest
{
	TEST_CLASS(MapperLibTest)
	{
	public:

		TEST_METHOD(fnMapperLib_Returns_Value)
		{
			Assert::AreEqual("Hello from Mapper Lib", fnMapperLib());
		}

		TEST_METHOD(Shout_Map_SHOUTS_Value)
		{
			Shout test;
			char* actual = NULL;

			test.Map("Hello World", &actual);

			Assert::AreEqual("HELLO WORLD", actual);
		}

		TEST_METHOD(Shout_Map_SHOUTS_Value_Negative)
		{
			Shout test;
			char* actual = NULL;

			test.Map("Hello World", &actual);

			Assert::AreNotEqual("Hello World", actual);
		}
		
		TEST_METHOD(Shout_Returns_Value)
		{
			Shout test;

			Assert::AreEqual("SHOUT OUT from STATIC MapperLib!!!!", test.ShoutOut());
		}
	};
}