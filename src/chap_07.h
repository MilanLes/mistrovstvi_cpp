#pragma once
/************************
**
** Header for Chapter 07
**
*************************
**
** Created in October 2018
**
*************************/

#include "main.h"
#define ARR_SIZE 10

struct box
{
	string znacka;
	float dlzka = 0;
	float sirka = 0;
	float vyska = 0;
	float objem = 0;
};

void function_direct(int *arr, int size, int fill);
void function_while(int* begin, int* end, int fill);
double max_of_array(const double *arr, int size);
int replace(char *base, char old_char, char new_char);

// begin task 1
double compute_harmonic_value(double val1, double val2);
bool ask_for_input(double *in1, double *in2);
void harmonic_value();

// begin task 2
void get_golf_input(int arr[], int *arr_size);
double golf_compute_result(const int game_results[], const int arr_size);
void golf_show_result(const int game_results[], int arr_size, double average);
void golf_average();

// begin task 3
void print_box(box box);
void calc_volume(box *box);
box create_box(string znacka, float dlzka, float sirka, float vyska);
void box_task();

// begin task 4
//lottery bullshit
long double probability_lottery();

// begin task 5
long factorial_recursive(long fact_in);
void compute_factorial();

// begin task 6
int fill_arr(double arr[], int arr_size);
void show_arr(double arr[], int arr_size);
void reverse_arr(double arr[], int arr_size);
void work_array();

// begin task 7
int refill_array(double *ar_begin, double *ar_end);
void re_array();

// begin task 8
struct student
{
	string fullname;
	string hobby;
	int ooplevel=0;
};

int getinfo(student pa[], int n);
void display_student(student st);
void display_student(student *st);
void display_students(const student pa[], int n);
void students_task();

// begin task 9
double add(double in_1, double in_2);
double multi(double in_1, double in_2);
double calculate(double a, double b, double (*heh)(double in_1, double in_2));
void calculate_task();