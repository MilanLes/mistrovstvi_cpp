/***********************************
**
** Main file to execute our program
**
************************************
**
** Created in August 2017
**
************************************/
#include "main.h"

#include "chap_02.h"
#include "chap_03.h"
#include "chap_04.h"
#include "chap_05.h"
#include "chap_06.h"
#include "chap_07.h"

int chapter_2()
{
	int choice;
	std::cout << "Enter your choice:\n"
		"(1) print_name()			=> who and where am I\n"
		"(2) furlong_to_yard()	\t	=> converts furlongs to yards\n"
		"(3) tri_mysi()				=> prints little poem\n"
		"(4) cels_to_fahren()	\t	=> converts celsius to fahrenheit\n"
		"(5) light_year_to_astro()\t\t=> converts light years to astro units\n"
		"(6) print_time()			=> prints entered time as hours and minutes\n\n";
	std::cin >> choice;
	switch (choice)
	{
	case 1: { print_name(); break; }
	case 2: { furlong_to_yard(); break; }
	case 3: { call_functions(); break; }
	case 4: { test_task_4(); break; }
	case 5: { test_task_5(); break; }
	case 6: { test_task_6(); break; }
	default: { std::cout << "Wrong choice my dear!\n"; chapter_2(); }
	}
	return 0;
}

int chapter_3()
{
	int choice;
	std::cout << "Enter your choice:\n"
		"(1) format_height()			=> converts height from in to ft and in\n"
		"(2) body_mass_index()			=> calculates BMI based on imperial units\n"
		"(3) geographically()			=> converts degrees, minutes, seconds to only degrees\n"
		"(4) seconds_to_date()			=> converts seconds to complete date\n"
		"(5) gas_consumption()			=> calculates gas consumption in metric system\n"
		"(6) eu_consumption_to_us() \t\t=> converts metric gas consumption l/km to imperial mpg\n\n";
	std::cin >> choice;
	switch (choice)
	{
	case 1: { format_height(); break; }
	case 2: { body_mass_index(); break; }
	case 3: { geographically(); break; }
	case 4: { seconds_to_date(); break; }
	case 5: { gas_consumption(); break; }
	case 6: { eu_consumption_to_us(); break; }
	default: { std::cout << "Wrong choice my dear!\n"; chapter_3(); }
	}
	return 0;
}

int chapter_4()
{
	int choice;
	std::cout << "Enter your choice:\n"
		"(1) basic_info()				=> prints basic info you have entered\n"
		"(2) string_usage ()			=> retransform char[] to string\n"
		"(3) concat_char()				=> concat char arrays using cstring\n"
		"(4) concat_string()			=> concat strings\n"
		"(5) structs_first()			=> first time working with structures\n"
		"(6) structs_second()			=> filling my structures with user data\n"
		"(7) pizza_analysis()			=> analazing pizzas\n"
		"(8) dynamic_pizza()			=> create dynamic pizza\n"
		"(9) dynamic_structs()			=> fill dynamic array\n\n";
	std::cin >> choice;
	cin.get(); // need to take away enter as input

	switch (choice)
	{
	case 1: { basic_info(); break; }
	case 2: { string_usage(); break; }
	case 3: { concat_char(); break; }
	case 4: { concat_string(); break; }
	case 5: { structs_first(); break; }
	case 6: { structs_second(); break; }
	case 7: { pizza_analysis(); break; }
	case 8: { dynamic_pizza(); break; }
	case 9: { dynamic_structs(); break; }
	default: { std::cout << "Wrong choice my dear!\n"; chapter_4(); }
	}
	return 0;
}

int chapter_5()
{
	int choice;
	std::cout << "Enter your choice:\n"
		"(1) sum_between()				=> sum all numbers in range\n"
		"(2) keep_adding()				=> sum of all entered numbers\n"
		"(3) investition()				=> calculate invested 100$\n"
		"(4) one_year_sale()			=> book sales after one year\n"
		"(5) three_years_sale()			=> book sales after three year\n"
		"(6) dynamic_array()			=> create dynamic array of cars\n"
		"(7) keep entering()			=> counting char* entered until end\n"
		"(8) keep_entering_str()		=> counting string entered until end\n"
		"(9) print_stars()				=> print number of rows filled with dots and stars\n\n";
	std::cin >> choice;
	cin.get(); // need to take away enter as input

	switch (choice)
	{
	case 1: { sum_between(); break; }
	case 2: { keep_adding(); break; }
	case 3: { investition(); break; }
	case 4: { one_year_sale(); break; }
	case 5: { three_year_sale(); break; }
	case 6: { dynamic_array(); break; }
	case 7: { keep_entering(); break; }
	case 8: { keep_entering_str(); break; }
	case 9: { print_stars(); break; }
	default: { std::cout << "Wrong choice my dear!\n"; chapter_5(); }
	}
	return 0;
}

int chapter_6()
{
	int choice;
	std::cout << "Enter your choice:\n"
		"(1) ChangeInput()	=> \n"
		"(2) CalcAverage()	=> \n"
		"(3) FourChoices()	=> \n"
		"(4) RVPStruct()		=> \n"
		"(5) Chectakovo()	=> \n"
		"(6) Prispevky()		=> \n"
		"(7) ReadWords()		=> \n"
		"(8) CharsInFile()	=> \n"
		"(9) PatronsFromFile()	=> \n\n";
	std::cin >> choice;
	cin.get(); // need to take away enter as input

	switch (choice)
	{
	case 1: { ChangeInput(); break; }
	case 2: { CalcAverage(); break; }
	case 3: { FourChoices(); break; }
	case 4: { RVPStructure(); break; }
	case 5: { Chechtakovo(); break; }
	case 6: { Prispevky(); break; }
	case 7: { ReadWords(); break; }
	case 8: { CharsInFile(); break; }
	case 9: { DonorsFromFile(); break; }
	default: { std::cout << "Wrong choice my dear!\n"; chapter_6(); }
	}
	return 0;
}

int chapter_7()
{
	int choice;
	std::cout << "Enter your choice:\n"
		"(1) harmonic_value()	=> \n"
		"(2) golf_average()	=> \n"
		"(3) box_task()	=> \n"
		"(4) probability_lottery()		=> \n"
		"(5) compute_factorial()	=> \n"
		"(6) work_array()		=> \n"
		"(7) refill_array()		=> \n"
		"(8) students_task()	=> \n"
		"(9) calculate_task()	=> \n\n";
	std::cin >> choice;
	cin.get(); // need to take away enter as input

	switch (choice)
	{
	case 1: { harmonic_value(); break; }
	case 2: { golf_average(); break; }
	case 3: { box_task(); break; }
	case 4: { probability_lottery(); break; }
	case 5: { compute_factorial(); break; }
	case 6: { work_array(); break; }
	case 7: { re_array(); break; }
	case 8: { students_task(); break; }
	case 9: { calculate_task(); break; }
	default: { std::cout << "Wrong choice my dear!\n"; chapter_7(); }
	}
	return 0;
}
//////////////////////////////
//
//		ENTRY POINT
//
/////////////////////////////
int main()
{
	int iResult = 0;
	iResult = chapter_7();
	return iResult;
}