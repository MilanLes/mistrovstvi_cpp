/************************
**
** Chapter 03
**
*************************
**
** Created in August 2017
**
*************************/

#include "chap_03.h"

#define GEO_MULTIPLICATOR 60
#define HOURS_IN_DAY 24
#define MINUTES_IN_HOUR 60
#define SECONDS_IN_MINUTE 60
#define HUNDRED_KM_TO_MILES 62.14
#define GALON_IN_LITRES 3.785

const int inch_to_ft = 12;

// task 3.1
void format_height()
{
	std::cout << "Enter height in inches:__\b\b";
	int vyska;
	std::cin >> vyska;
	std::cout << "Your height is: " << vyska / inch_to_ft << " feet and " << vyska % inch_to_ft << " inch" << std::endl;
}

// task 3.2
void body_mass_index()
{
	std::cout << "Enter your height in feet and inches and your weight in pounds\nHeight:__ ft\b\b\b\b\b";
	int feet;
	std::cin >> feet;
	
	std::cout << "Height:__ in\b\b\b\b\b";
	int inches;
	std::cin >> inches;

	std::cout << "Weigth:___ lb\b\b\b\b\b\b";
	int pounds;
	std::cin >> pounds;

	inches += feet * inch_to_ft;
	double metres = inches * 0.0254;
	double kilos = pounds / 2.2;
	std::cout << "Your BMI is " << kilos / pow(metres, 2) << std::endl;
}

// task 3.3
void geographically()
{
	std::cout << "Enter the coordinates in:\nDegrees: ";
	double geo_deg, geo_min, geo_sec;
	std::cin >> geo_deg;
	std::cout << "Minutes: ";
	std::cin >> geo_min;
	std::cout << "Seconds: ";
	std::cin >> geo_sec;
	const double geo_result = geo_deg + geo_min/ GEO_MULTIPLICATOR + geo_sec/pow(GEO_MULTIPLICATOR, 2);
	std::cout << geo_deg << " degrees, " << geo_min << " minutes and " << geo_sec << " seconds is " << geo_result << "degrees." << std::endl;
}

// task 3.4
void seconds_to_date()
{
	long time_seconds;
	std::cout << "Seconds: ";
	std::cin >> time_seconds;
	int iDays, iHours, iMinutes, iSeconds;
	iSeconds = time_seconds % SECONDS_IN_MINUTE;
	iMinutes = time_seconds / SECONDS_IN_MINUTE;
	iHours = iMinutes / MINUTES_IN_HOUR;
	iMinutes %= MINUTES_IN_HOUR;
	iDays = iHours / HOURS_IN_DAY;
	iHours %= HOURS_IN_DAY;

	std::cout << time_seconds << " seconds = ";
	if (iDays) std::cout << iDays << " days";
	if (iHours) std::cout << ", " << iHours << " hours";
	if (iMinutes) std::cout << ", " << iMinutes << " minutes";
	if (iSeconds) std::cout << ", " << iSeconds << " seconds";
	std::cout << "." << std::endl;
}

// task 3.5
void gas_consumption()
{
	std::cout << "How many miles have you driven: ";
	double dMiles;
	std::cin >> dMiles;
	std::cout << "How much gasoline have you used (galons): ";
	double dGalons;
	std::cin >> dGalons;

	std::cout << "Your gas consumption is " << dMiles / dGalons << " mpg.\n";
}

// task 3.6
void eu_consumption_to_us()
{
	std::cout << "Enter gas consumption in l/km: ";
	double dConsumption;
	std::cin >> dConsumption;
	std::cout << "Your consumption is: " << HUNDRED_KM_TO_MILES / (dConsumption / GALON_IN_LITRES) << " mpg." << std::endl;
}