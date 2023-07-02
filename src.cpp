
#include "C++ArmyKnife/txtgen.hpp"
#include "C++ArmyKnife/chrono.hpp"

auto main()->int
{
	try
	{
		txtgen();
		return EXIT_SUCCESS;
	}
	catch (const std::exception& xxx)
	{
		std::cerr
			<< "\n\nERROR DETECTED!\n\n"
			<< xxx.what()
			<< "\n\n\n     Program will be terminated in 3 seconds.\n\n     T-";
		countdown(3, [](int t) { std::cout << t << ' '; });
		return EXIT_FAILURE;
	}
}