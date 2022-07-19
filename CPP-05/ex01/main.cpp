#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
   	try
	{
		Bureaucrat Jacky("Jacky", 150);
		Form Regist("Putain", 75, 75);
		std::cout << Regist;
		Regist.beSigned(Jacky);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return (0);
}