/************************
**
** Chapter 02
**
*************************/

#include "chap_02.h"

// task 1
void print_name()
{
	std::cout << NAME_STRING << " and " << ADDRESS_STRING << std::endl;
}

// task 2
void furlong_to_yard()
{
	double furlong;
	std::cout << "Enter length in furlong: ";
	std::cin >> furlong;
	double yards = furlong * 220;
	std::cout << std::endl << yards << " in yards.\n";
}


// task 3
void tri_mysi()
{
	std::cout << "Tri slepe mysi\n";
}

void divaj_sa()
{
	std::cout << "Divej se, jak utikaji\n";
}

void call_functions()
{
	tri_mysi();
	tri_mysi();
	divaj_sa();
	divaj_sa();
}

// task 4
double cels_to_fahren(double celsius)
{
	return 1.8 * celsius + 32.0;
}

void test_task_4()
{
	std::cout << "Enter celsius value: ";
	double celsius, fahrenheit;
	std::cin >> celsius;
	fahrenheit = cels_to_fahren(celsius);
	std::cout << "Fahrenheit: " << fahrenheit << std::endl;
}

// task 5
double light_year_to_astro_unit(double light_year)
{
	return 63240 * light_year;
}

void test_task_5()
{
	std::cout << "Enter light years value: ";
	double light_years, astro_unit;
	std::cin >> light_years;
	astro_unit = light_year_to_astro_unit(light_years);
	std::cout << light_years << " light years is " << astro_unit << " astro units" << std::endl;
}

// task 6
void print_time(int hrs, int mnts)
{
	std::cout << "Time: " << hrs << ":" << mnts << std::endl;
}

void test_task_6()
{
	int hrs, mnts;
	std::cout << "Enter hours: ";
	std::cin >> hrs;
	std::cout << "Enter minutes: ";
	std::cin >> mnts;
	print_time(hrs, mnts);
}