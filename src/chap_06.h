#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <cctype>
#include <vector>

#define ZOZNAM_SIZE 5

struct rvp
{
	std::string cele_meno;
	std::string zaradenie;
	std::string rvp_meno;
	int volba;
};

struct Donor
{
	std::string donor_name;
	double donation;
};

void ChangeInput();

void CalcAverage();

void FourChoices();

void ReadInput(char *choice);
void OutputFullNames();
void OutputProfessions();
void OutputNicknames();
void OutputByChoice();
void RVPStructure();

void Chechtakovo();

void Prispevky();

void ReadWords();

int CharsInFile();

int DonorsFromFile();