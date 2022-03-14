/************************
**
** Chapter 07
**
*************************/

#include "chap_07.h"

// #define ARR_SIZE 10

// struct box
// {
// 	string znacka;
// 	float dlzka;
// 	float sirka;
// 	float vyska;
// 	float objem;
// };

void function_direct(int *arr, int size, int fill)
{
	for(int it = 0; it < size; it++)
		arr[it] = fill;
}

void function_while(int* begin, int* end, int fill)
{
	while(begin != end)
	{
		*begin = fill;
		begin++;
	}
}

double max_of_array(const double *arr, int size)
{
	double result = *arr;
	for(int it = 0; it < size; it++)
		if(result < arr[it])
			result = arr[it];
	return result;
}

int replace(char *base, char old_char, char new_char)
{
	int result = 0;
	while (*base)
	{
		if(*base == old_char)
		{
			*base = new_char;
			result++;
		}
		base++;
	}
	return result;
}
// begin task 1
double compute_harmonic_value(double val1, double val2)
{
	double result = 0;
	result = 2 * val1 * val2 / (val1 + val2);
	cout << "Harmonicka stredna hodnota pre cislo " << val1 << " a cislo "
			<< val2 << " je " << result << endl;
	return result;
}

bool ask_for_input(double *in1, double *in2)
{
	cout << "Zadaj prve cislo: ";
	cin >> *in1;
	cout << "Zadaj druhe cislo: ";
	cin >> *in2;
	return *in1 == 0 || *in2 == 0;
}

void harmonic_value()
{
	double in1, in2;
	while(!ask_for_input(&in1, &in2))
	{
		compute_harmonic_value(in1, in2);
	}
}

// begin task 2
void get_golf_input(int arr[], int *arr_size)
{
	int iter = 1;
	int val = 0;
	cout << "Zadaj vysledok hier alebo 0 pre ukoncenie vstupu" << endl;
	do
	{
		cout << "hra cislo " << iter << ":";
		cin >> val;
		if(val > 0)
		{
			arr[iter-1] = val;
			iter++;
		}
		else if (val < 0)
			cout << "zadal si zlu hodnotu, opakuj vstup!" << endl;
	// cyklus opakuj kym nedostanes nulovu hodnotu alebo 10 hodnot
	} while(val != 0 && iter < 11);
	*arr_size = iter - 1;
}

double golf_compute_result(const int game_results[], const int arr_size)
{
	double result = 0.0;
	// sprav priemer zo vstupnych hodnot
	int iter = 0;
	while(iter < arr_size)
	{
		// zrataj hodnoty
		result += game_results[iter];
		iter++;
	}
	// vysledok predel velkostou pola
	return result / arr_size;
}

void golf_show_result(const int game_results[], int arr_size, double average)
{
	// zobraz pole do riadku
	cout << "Vysledky hier su: ";
	string res = "";
	for (int iter = 0; iter < arr_size; iter++)
	{
		cout << game_results[iter];
		// za poslednym cislom nevypisuj ciarku
		if (iter != arr_size - 1) cout << ", ";
	}

	cout << endl << "Priemer hier je: " << average << endl;
}

void golf_average()
{
	int game_results[10];
	int arr_size = 0;
	get_golf_input(game_results, &arr_size);
	double average = golf_compute_result(game_results, arr_size);
	golf_show_result(game_results, arr_size, average);
}

// begin task 3
void print_box(box box)
{
	cout << "znacka: " << box.znacka << endl;
	cout << "vyska: " << box.vyska << endl;
	cout << "sirka: " << box.sirka << endl;
	cout << "dlzka: " << box.dlzka << endl;
	cout << "objem: " << box.objem << endl;
}

void calc_volume(box *box)
{
	box->objem = box->dlzka * box->sirka * box->vyska;
}

box create_box(string znacka, float dlzka, float sirka, float vyska)
{
	box res;
	res.znacka = znacka;
	res.dlzka = dlzka;
	res.sirka = sirka;
	res.vyska = vyska;

	calc_volume(&res);
	print_box(res);
	return res;
}

void box_task()
{
	cout << "zadaj vlastnosti kocky:\nvyska: ";
	float vyska, sirka, dlzka;
	cin >> vyska;
	cout << "sirka: ";
	cin >> sirka;
	cout << "hlbka: ";
	cin >> dlzka;
	string znacka;
	cout << "znacka: ";
	cin >> znacka;
	cout << "-----------\n";
	box user_box = create_box(znacka, dlzka, sirka, vyska);
}

// begin task 4
//lottery bullshit
long double probability_lottery()
{
	// first probability is 5 numbers from range 1-27
	long double prob_1 = 1.0;
	for(int possibilities = 27, picks = 5; picks > 0; possibilities--, picks--)
		prob_1 = prob_1 * ((double)picks/(double)possibilities);
	// second probability is just one number from 27
	long double prob_2 = 1.0/27;

	// final probability is product of two probabilities
	return prob_1 * prob_2;
}

// begin task 5
long factorial_recursive(long fact_in)
{
	if(fact_in == 0 || fact_in == 1)
		return 1;
	else
		return fact_in * factorial_recursive(fact_in - 1);
	return -1;
}

void compute_factorial()
{
	// ask for input
	cout << "zadaj cislo na faktorial: ";
	long fact;
	cin >> fact;
	while(fact >= 0)
	{
		cout << "faktorial zadaneho cisla je: " << factorial_recursive(fact) << endl;
		// ask for another number to calculate
		cout << "zadaj nove cislo na vypocet alebo zaporne na ukoncenie programu: ";
		cin >> fact;
	}
	// input is lower than zero, end program
	cout << "cislo je menej ako nula, ukoncujem program\n";
}

// begin task 6
int fill_arr(double arr[], int arr_size)
{
	double value_to_fill = 0.0;
	int filled_values = 0;
	cout << "zadaj hodnotu na vyplnenie pola: ";
	cin >> value_to_fill;
	// if user does not input double value, return
	if(cin.fail()) return filled_values;
	for(int iter = 0; iter < arr_size; iter++)
	{
		arr[iter] = value_to_fill + iter;
		filled_values++;
	}
	return filled_values;
}

void show_arr(double arr[], int arr_size)
{
	cout << "[";
	for(int iter = 0; iter < arr_size - 1; iter++)
		cout << arr[iter] << ", ";
	cout << arr[arr_size - 1] << "]" << endl;
}

void reverse_arr(double arr[], int arr_size)
{
	double temp_val = 0.0;
	for(int half_arr = 1; half_arr < arr_size / 2; half_arr++)
	{
		temp_val = arr[half_arr];
		arr[half_arr] = arr[arr_size - half_arr - 1];
		arr[arr_size - half_arr - 1] = temp_val;
	}
}

void work_array()
{
	#define arr_size 20
	double d_arr[arr_size];
	cout << fill_arr(d_arr, arr_size) << " hodnot bolo naplnenych" << endl;
	cout << "Pred reverse:\n";
	show_arr(d_arr, arr_size);
	reverse_arr(d_arr, arr_size);
	cout << "Po reverse:\n";
	show_arr(d_arr, arr_size);
}

// begin task 7
int refill_array(double *ar_begin, double *ar_end)
{
	double temp;
	double *p_assign = ar_begin;
	int i = 0;

	while(p_assign != ar_end)
	{
		cout << "zadaj hodnotu c. " << i + 1 << ": ";
		cin >> temp;

		if(!cin)
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "neplatny vstup, ukoncujem...\n";
			break;
		}
		else if(temp < 0)
			break;
		*p_assign = temp;
		p_assign++;
		i++;
	}

	return i;
}

void re_array()
{
	#define arr_size 20
	double d_arr[arr_size];
	cout << refill_array(d_arr, d_arr + arr_size) << " hodnot bolo naplnenych" << endl;
	show_arr(d_arr, arr_size);
}

// begin task 8
int getinfo(student pa[], int n)
{
	int student_count = 0;
	for(int stu_iter = 0; stu_iter < n; stu_iter++)
	{
		cout << "info pre studenta cislo " << stu_iter + 1 << ":" << endl;
		string temp_str;
		int temp_lvl = 0;
		cout << "-meno: ";
		cin >> temp_str;
		pa[stu_iter].fullname = temp_str;
		cout << "-hobby: ";
		cin >> temp_str;
		pa[stu_iter].hobby = temp_str;
		cout << "-ooplevel: ";
		cin >> temp_lvl;
		pa[stu_iter].ooplevel = temp_lvl;
		student_count++;
	}
	return student_count;
}

void display_student(student st)
{
	cout << "meno: " << st.fullname << endl;
	cout << "hobby: " << st.hobby << endl;
	cout << "level: " << st.ooplevel << endl << endl;
}

void display_student(student *st)
{
	cout << "meno: " << st->fullname << endl;
	cout << "hobby: " << st->hobby << endl;
	cout << "level: " << st->ooplevel << endl << endl;
}

void display_students(const student pa[], int n)
{
	for(int stu_iter = 0; stu_iter < n; stu_iter++)
		display_student(pa[stu_iter]);
}

void students_task()
{
	cout << "zadaj velkost triedy: ";
	int class_size;
	cin >> class_size;
	// while(cin.get() != 'n')
	// 	continue;

	student *ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);

	for(int i = 0; i < entered; i++)
	{
		display_student(ptr_stu[i]);
		display_student(&ptr_stu[i]);
	}

	display_students(ptr_stu, entered);
	delete [] ptr_stu;
}

// begin task 9
double add(double in_1, double in_2)
{
	return in_1 + in_2;
}

double multi(double in_1, double in_2)
{
	return in_1 * in_2;
}

double calculate(double a, double b, double (*heh)(double in_1, double in_2))
{
	return heh(a, b);
}

void calculate_task()
{
	double a, b;
	cout << "enter two double values: \nfirst: ";
	cin >> a;
	cout << "second: ";
	cin >> b;

	cout << "enter desired operation: \n1) add\n2) multiply\n";
	double d_operation;
	cin >> d_operation;
	if(d_operation == 1)
		cout << "result of addition is: " << calculate(a, b, add) << endl;
	else if(d_operation == 2)
		cout << "result of multiplication is: " << calculate(a, b, multi) << endl;
	else
		cout << "blyat, wrong choice! now go to gulag!" << endl;
}

// testing vector sorting based on sorting another vector
void vec_insert()
{
	vector<int> iIndexes;
	vector<char> cNames;
	int iArr[] = {5, 8, 1, 15, 3, 7, 9, 12, 13, 6};
	char cArr[] = {'e','h','a','o','c','g','i','l','m','f'};
	for(int i = 0; i < 10; i++)
	{
		bool bInserted = false;
		// if the vectors are empty, insert it directly
		if(iIndexes.empty() && cNames.empty())
		{
			iIndexes.push_back(iArr[i]);
			cNames.push_back(cArr[i]);
		}
		// otherwise insert it to certain spot in vector
		else
		{
			vector<int>::iterator iIter;
			vector<char>::iterator cIter;
			for(iIter = iIndexes.begin(), cIter = cNames.begin(); iIter != iIndexes.end(); iIter++, cIter++)
			{
				if(iArr[i] < *iIter)
				{
					// we can insert variables to certain point into vector
					// right after that iterators are invalid, break for loop
					iIndexes.insert(iIter, iArr[i]);
					cNames.insert(cIter, cArr[i]);
					bInserted = true;
					break;
				}
			}
			// if we get here, we should just append to vector
			if(!bInserted)
			{
				iIndexes.push_back(iArr[i]);
				cNames.push_back(cArr[i]);
			}
		}
	}
	for(int p = 0; p < iIndexes.size(); p++)
		cout << iIndexes.at(p) << ": " << cNames.at(p) << endl;
}

void main_for_chapter_7()
{
	//int arr[ARR_SIZE] = {0,0,0,0,0};
	//test_function(arr, ARR_SIZE, 1);
	//function_while(arr, arr+ARR_SIZE, 2);
	//for (int iter :arr)
	//	cout << iter;

	//double d_arr[ARR_SIZE] = {1.1, -5.3, 9.89, 9.88, 0};
	//cout << max_of_array(d_arr, ARR_SIZE);

	// char str[] = {'s','e','d','i',' ','m','u','c','h','a',' ','n','a',' ','s','t','e','n','e',' ','n','a',' ','s','t','e','n','e',' ','n','a',' ','s','t','e','n','e'};
	// cout << "Before: " << str << endl;
	// char old = ' ', new_char = '_';
	// cout << "Replaced chars: " << replace(str, old, new_char) << endl;
	// cout << "After: " << str << endl;

	//golf_average();

	//box test_box = create_box("test box", 2, 2, 3);

	//cout << "pravdepodobnost je: " << probability_lottery() << endl;

	//compute_factorial();

	//work_array();

	// double temp_ar[ARR_SIZE];
	// int temp_ar_size = refill_array(temp_ar, temp_ar + ARR_SIZE);
	// if(temp_ar_size) show_arr(temp_ar, temp_ar_size);

	// students_task();

	// double res = calculate();
	// cout << "res is: " << res << endl;

	// calculate_task();
}
