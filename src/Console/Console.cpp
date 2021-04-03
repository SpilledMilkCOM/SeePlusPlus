#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Hello World!\n";

    std::cout << "argc=" << argc << "\n";

	for (int index = 0; index < argc; index++)
	{
		std::cout << "argv=" << argv[index] << "\n";
	}
}