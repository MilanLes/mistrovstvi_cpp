#pragma once
/************************
**
** header for Chapter 04
**
*************************
**
** Created in August 2017
**
*************************/

#include "main.h"

struct sladka_tycinka
{
	string name;
	double weight;
	long calories;
};

struct pizza
{
	string manufacturer;
	int diameter;
	int weight;
};

// task 4.1
void basic_info();

// task 4.2
void string_usage();

// task 4.3
void concat_char();

// task 4.4
void concat_string();

// task 4.5
void structs_first();

// task 4.6
void structs_second();

// task 4.7
void pizza_analysis();

// task 4.8
void dynamic_pizza();

// task 4.9
void dynamic_structs();