#include "chap_05.h"

const char* list_of_months[] =
{
	"january",
	"february",
	"march",
	"april",
	"may",
	"june",
	"july",
	"august",
	"september",
	"october",
	"november",
	"december"
};

const int months_num = 12;

void sum_between()
{
	int temp = 0, start_num, end_num;

	cout << "Enter first number: ";
	cin >> start_num;
	cout << "Enter second number: ";
	cin >> end_num;

	if (end_num < start_num)
	{
		temp = start_num;
		start_num = end_num;
		end_num = temp;
		temp = 0;
	}

	for ( ; start_num <= end_num; start_num++)
	{
		temp += start_num;
	}

	cout << "result is: " << temp << endl;
}

void keep_adding()
{
	cout << "keep entering numbers and terminate input with 0\n";
	int temp, res = 0;
	do 
	{
		cin >> temp;
		res += temp;
		cout << "meanwhile -> " << res << endl;
	} while (temp != 0);
	cout << endl << "result is: " << res << endl;
}

void investition()
{
	const int base_invest = 100;
	double daphne = base_invest, cleo = base_invest;
	// daphne investovala klasicky a ma urok 10% z base investu
	// cleo investoval spekulantsky a ma 5% z predchadzajuceho roka plus urok
	int invest_year = 0;
	do 
	{
		daphne += 10;
		cleo *= 1.05;
		invest_year++;
		cout << "after " << invest_year << " years daphne has " << daphne << " and cleo has " << cleo << endl;
	} while (cleo <= daphne);
	
	cout << "cleo has more money(" << cleo << ") than daphne(" << daphne << ") after " << invest_year << "years\n";
}

void one_year_sale()
{

	int sales[months_num], year_sale = 0;

	cout << "enter sales for month:\n";
	for (int ither = 0; ither < months_num; ither++)
	{
		cout << list_of_months[ither] << ": ";
		cin >> sales[ither];
		year_sale += sales[ither];
	}
	cout << "sales for whole one year are: " << year_sale << endl;
}

void three_year_sale()
{
	const int years_num = 3;
	int sales[years_num][months_num], years_sales[3], complete_sale = 0;

	for (int years = 0; years < years_num; years++)
	{
		years_sales[years] = 0;
		cout << "enter sales record for months in year " << years + 1 << ":\n";
		for (int months = 0; months < months_num; months++)
		{
			cout << list_of_months[months] << ": ";
			cin >> sales[years][months];
			years_sales[years] += sales[years][months];
			complete_sale += sales[years][months];
		}
	}
	
	cout << "\nbooks are selling in year ";
	for (int y = 0; y < years_num; y++)
	{
		cout << y << " = " << years_sales[y] << " -> ";
	}
	cout << "num of all books sold: " << complete_sale << endl;
}

void dynamic_array()
{
	int num_of_cars;
	cout << "enter number of cars to store: ";
	cin >> num_of_cars;

	blyatmobile *collection = new blyatmobile[num_of_cars];

	for (int car = 0; car < num_of_cars; car++)
	{
		cout << "enter brand of car indexed " << car << ": ";
		cin >> collection[car].brand;

		cout << "enter year of manufaction: ";
		cin >> collection[car].origin_year;
	}

	system("cls");

	for (int car = 0; car < num_of_cars; car++)
	{
		cout << collection[car].brand << " is made in " << collection[car].origin_year << endl;
	}

	delete[]collection;
}

void keep_entering()
{
	char word[50];
	int count = 0;

	cout << "Enter words (to stop, type the word done):\n";

	while (cin >> word && strcmp("done", word))
		++count;

	cout << "You entered a total of " << count << " words.\n";
}

void keep_entering_str()
{
	string word;
	int count = 0;

	cout << "Enter words (to stop, type the word done):\n";

	while (cin >> word && ("done" != word))
		++count;

	cout << "You entered a total of " << count << " words.\n";
}

void print_stars()
{
	cout << "enter num of rows: ";
	int rows;
	cin >> rows;

	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < rows; col++)
		{
			if (row + col < rows - 1)
			{
				cout << '.';
			} 
			else
			{
				cout << '*';
			}
		}
		cout << endl;
	}
}