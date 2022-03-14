/************************
**
** Chapter 04
**
*************************
**
** Created in August 2017
**
*************************/

#include <cstring>

#include "chap_04.h"

void basic_info()
{
	string first, last;
	cout << "Krstne meno? ";
	getline(cin, first);

	cout << "Priezvisko? ";
	getline(cin, last);

	char grade;
	cout << "Znamka? ";
	cin >> grade;
	grade++;

	int age;
	cout << "Vek? ";
	cin >> age;
	
	cout << "meno: " << last << ", " << first << endl;
	cout << "znamka: " << grade << endl;
	cout << "vek: " << age << endl;
}

void string_usage()
{
	string name, cake;
	cout << "Name: ";
	getline(cin, name);

	cout << "Cake: ";
	getline(cin, cake);

	cout << "i have a great " << cake << " for you, " << name << endl;
}

void concat_char()
{
	char first_name[20], last_name[20], whole[45];
	cout << "name: ";
	cin.getline(first_name, 20);

	cout << "surname: ";
	cin.getline(last_name, 20);

	strcpy_s(whole, last_name);
	strcat_s(whole, ", ");
	strcat_s(whole, first_name);
	cout << "whole name: " << whole << endl;
}

void concat_string()
{
	string first_name, last_name, whole;
	cout << "name: ";
	getline(cin, first_name);

	cout << "surname: ";
	getline(cin, last_name);

	whole = last_name + ", " + first_name;
	cout << "whole name: " << whole << endl;
}

void structs_first()
{
	sladka_tycinka snacks =
	{
		"Mocha Munch",
		2.3,
		350
	};

	cout << "Sladka tycinka " << snacks.name << " vazi "
		<< snacks.weight << " a obsahuje " << snacks.calories << " cals\n";
}

void structs_second()
{
	const size_t num_of_snacks = 3;
	sladka_tycinka snacks[num_of_snacks];

	for (size_t iterathor = 0; iterathor < num_of_snacks; iterathor++)
	{
		cout << "name of " << iterathor + 1 << " snack: ";
		//getline(cin, snacks[iterathor].name);
		cin >> snacks[iterathor].name;

		cout << "weight of " << iterathor + 1 << " snack: ";
		cin >> snacks[iterathor].weight;

		cout << "calories of " << iterathor + 1 << " snack: ";
		cin >> snacks[iterathor].calories;
	}

	system("cls");
	size_t number_of_snack = 0;
	for (short candy_iter = 0; candy_iter < num_of_snacks; candy_iter++)
	{
		cout << "tycinka cislo " << ++number_of_snack << " sa vola "
			<< snacks[candy_iter].name << ", vazi " << snacks[candy_iter].weight << " a ma "
			<< snacks[candy_iter].calories << " kalorii" << endl << endl;
	}
}

void pizza_analysis()
{
	pizza yum_yum;
	cout << "manufacturer of pizza: ";
	getline(cin, yum_yum.manufacturer);
	cin.get();

	cout << "diameter of pizza: ";
	cin >> yum_yum.diameter;

	cout << "weight of pizza: ";
	cin >> yum_yum.weight;

	cout << endl << endl << "pizza from " << yum_yum.weight << " weights "
		<< yum_yum.weight << " and is " << yum_yum.diameter << " cm wide\n";
}

void dynamic_pizza()
{
	pizza *yum_yum = new pizza;
	cout << "manufacturer of pizza: ";
	getline(cin, yum_yum->manufacturer);

	cout << "diameter of pizza: ";
	cin >> yum_yum->diameter;

	cout << "weight of pizza: ";
	cin >> yum_yum->weight;

	cout << endl << endl << "pizza from " << yum_yum->weight << " weights "
		<< yum_yum->weight << " and is " << yum_yum->diameter << " cm wide\n";
	
	delete yum_yum;
}

void dynamic_structs()
{
	const size_t num_of_snacks = 3;
	sladka_tycinka *snacks = new sladka_tycinka[3];

	for (size_t iterathor = 0; iterathor < num_of_snacks; iterathor++)
	{
		cout << "name of " << iterathor + 1 << " snack: ";
		//getline(cin, snacks[iterathor].name);
		cin >> snacks[iterathor].name;

		cout << "weight of " << iterathor + 1 << " snack: ";
		cin >> snacks[iterathor].weight;

		cout << "calories of " << iterathor + 1 << " snack: ";
		cin >> snacks[iterathor].calories;
	}

	system("cls");
	size_t number_of_snack = 0;
	for(int it = 0; it < num_of_snacks; it++)
	{
		cout << "tycinka cislo " << it + 1 << " sa vola "
			<< snacks->name << ", vazi " << snacks->weight << " a ma "
			<< snacks->calories << " kalorii" << endl << endl;
		snacks++;
	}
	
// 	for each (sladka_tycinka snack in snacks)
// 	{
// 		cout << "tycinka cislo " << ++number_of_snack << " sa vola "
// 			<< snack.name << ", vazi " << snack.weight << " a ma "
// 			<< snack.calories << " kalorii" << endl << endl;
// 	}
	snacks -= num_of_snacks;
	delete[] snacks;
}