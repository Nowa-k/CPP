#include "Bureaucrat.hpp"

int main(void)
{
   	try
	{
		Bureaucrat Jacky("Jacky", 150);
		std::cout << Jacky;
		Jacky.decrement();
		std::cout << Jacky;
		Jacky.increment();
		std::cout << Jacky;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return (0);
}