#include "chap_06.h"

#include <assert.h>

using namespace std;

struct rvp zoznam[] =
{
	{
		"Fero Taraba",
		"inzinier",
		"Stalk3r",
		0
	},
	{
		"Zara Nova",
		"QA",
		"perfecti0n",
		1
	},
	{
		"Johnny Money",
		"Finance and advertisement",
		"ca$h",
		0
	},
	{
		"Melissandre Sauce",
		"Religion expert",
		"pri3$t",
		1
	},
	{
		"Edgar Jones",
		"CEO",
		"the_bo$$",
		2
	}
};

void ChangeInput()
{
	char inputC;
	cin >> inputC;
	while (inputC != '@')
	{
		if (!isalpha(inputC))
		{
			cin >> inputC;
			continue;
		}
		else if (islower(inputC))
		{
			inputC = toupper(inputC);
		}
		else if (isupper(inputC))
		{
			inputC = tolower(inputC);
		}
		cout << inputC;
		cin >> inputC;
	}
	cout << endl;
}

void CalcAverage()
{
	double avrg = 0, inputDbl;
	std::vector<double> inputVec = std::vector<double>();
	short counter = 0;
	cout << "Enter 10 values: ";
	for (short inp = 0; inp < 10; inp++)
	{
		//cin >> inputDbl;
		if (cin >> inputDbl)
		{
			inputVec.emplace_back(inputDbl);
			avrg += inputDbl;
		}
		else
		{
			break;
		}
		inputDbl = 0;
	}
	if (inputVec.size() > 0)
	{
		avrg = avrg / inputVec.size();
		short counter = 0;
		for (short iterathor = 0; iterathor < inputVec.size(); iterathor++)
		{
			if (inputVec[iterathor] > avrg)
				counter++;
		}
		cout << "Avrg == " << avrg << " and count of more than avrg == " << counter << endl;
	}
	else cout << "Empty vector!\n";
}

void FourChoices()
{
	cout << "a) auto\t\tb) budova\nc) citrus\td) dom\n";
	char choice;
	cin >> choice;
	while (choice != 'a' || choice != 'b' ||
		choice != 'c' || choice != 'd')
	{
		switch (choice)
		{
		case 'a':
		{
			cout << "WV je auto\n";
			break;
		}
		case 'b':
		{
			cout << "Banka je budova\n";
			break;
		}
		case 'c':
		{
			cout << "Pomaranc je citrus\n";
			break;
		}
		case 'd':
		{
			cout << "Bungalov je dom\n";
			break;
		}
		default:
		{
			FourChoices();
			break;
		}
		}
	}
}

void ReadInput(char *choice)
{
	cout << "a.) write full names" << endl;
	cout << "b.) write work positions" << endl;
	cout << "c.) write nicknames" << endl;
	cout << "d.) write by choice" << endl;
	cout << "q.) exit program" << endl;
	string user_input;
	getline(cin, user_input);
	*choice = user_input[0];
}

void RVPStructure()
{
	char choice;
	ReadInput(&choice);
	while (choice != 'q')
	{
		switch (choice)
		{
		case 'a':
		case 'A':
		{
			OutputFullNames();
			break;
		}
		case 'b':
		case 'B':
		{
			OutputProfessions();
			break;
		}
		case 'c':
		case 'C':
		{
			OutputNicknames();
			break;
		}
		case 'd':
		case 'D':
		{
			OutputByChoice();
			break;
		}
		case 'Q':
		{
			return;
		}
		default:
			break;
		}
		ReadInput(&choice);
	}
}

void OutputFullNames()
{
	for (short personNdx = 0; personNdx < ZOZNAM_SIZE; personNdx++)
	{
		cout << personNdx << ": " << zoznam[personNdx].cele_meno << endl;
	}
}

void OutputProfessions()
{
	for (short personNdx = 0; personNdx < ZOZNAM_SIZE; personNdx++)
	{
		cout << personNdx << ": " << zoznam[personNdx].zaradenie << endl;
	}
}

void OutputNicknames()
{
	for (short personNdx = 0; personNdx < ZOZNAM_SIZE; personNdx++)
	{
		cout << personNdx << ": " << zoznam[personNdx].rvp_meno << endl;
	}
}

void OutputByChoice()
{
	for (short personNdx = 0; personNdx < ZOZNAM_SIZE; personNdx++)
	{
		switch (zoznam[personNdx].volba)
		{
		case 0:
		{
			cout << personNdx << ": " << zoznam[personNdx].cele_meno << endl;
			break;
		}
		case 1:
		{
			cout << personNdx << ": " << zoznam[personNdx].zaradenie << endl;
			break;
		}
		case 2:
		{
			cout << personNdx << ": " << zoznam[personNdx].rvp_meno << endl;
			break;
		}
		default:
			assert(0 && "should not get here ever!\n");
			break;
		}
	}
}

void Chechtakovo()
{
	double salary = 0, taxes = 0;
	cout << "Enter salary: ";
	cin >> salary;
	while (salary > 0)
	{
		if (salary > 35000)
			taxes = (salary - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;
		else if (salary > 15000)
			taxes = (salary - 15000) * 0.15 + 10000 * 0.1;
		else if (salary > 5000)
			taxes = (salary - 5000) * 0.1;
		else if (salary > 0 && salary <= 5000)
			taxes = 0;
		else
			assert(false);
		cout << "You should pay: " << taxes << endl;
		cout << "Enter next value: ";
		cin >> salary;
	}
}

void Prispevky()
{
	int num_of_donors;
	cout << "Enter number of donors: ";
	cin >> num_of_donors;
	cin.get();
	Donor *patrons = new Donor[num_of_donors];
	// input of patrons
	for(short patron_iter = 0; patron_iter < num_of_donors; patron_iter++)
	{
        cout << "Enter information for patron " << patron_iter+1 << ": ";
        cout << "- name: ";
        getline(cin, patrons[patron_iter].donor_name);
        cout << "- donation: ";
        cin >> patrons[patron_iter].donation;
		cin.get();
	}
	// write out patron names and their status
    cout << "output:\n";
	for(short patron_iter = 0; patron_iter < num_of_donors; patron_iter++)
	{
        string title;
        title = patrons[patron_iter].donation > 10000 ?
        " is a premium patron" : patrons[patron_iter].donation > 0 ?
        " is a patron" : " has no donation";
        cout << patrons[patron_iter].donor_name << title << endl;
	}
}

void ReadWords()
{
	cout << "Enter line to parse: ";
	//cin.get();
	string strLine;
	getline(cin, strLine);
	int words = 0, samo = 0, spolu = 0, ine = 0;
	char cPrevious, cStr = ' ';
	for (int strIter = 0; strIter < strLine.length(); strIter++)
	{
		cPrevious = cStr;
		cStr = strLine[strIter];
		if(cStr == ' ')
			continue;
		if (cPrevious == ' ')
		{
			cStr = tolower(cStr);
			if (cStr == 'a' || cStr == 'e' || cStr == 'i' || cStr == 'o' || cStr == 'u' || cStr == 'y')
			{
				samo++;
			}
			else if (cStr > 'a' && cStr <= 'z')
			{
				spolu++;
			}
			else
			{
				ine++;
			}
			words++;
		}
	}

	cout << "pocet slov:  " << words << endl;
	cout << "samohlasky:  " << samo << endl;
	cout << "spoluhlasky: " << spolu << endl;
	cout << "ostatne:     " << ine << endl;
}

int CharsInFile()
{
	cout << "enter file name: ";
	string file_name;
	getline(cin, file_name);
    ifstream input_file;
    input_file.open(file_name.c_str());
    char input_char;
    if(!input_file.is_open())
    {
        cout << "file can not opened!" << endl;
        return EXIT_FAILURE;
    }

    long count = 0;
    while(input_char = input_file.get() != EOF)
        count++;

    cout << "file " << file_name << " contains "
         << count << " characters." << endl;
	return EXIT_SUCCESS;
}

int DonorsFromFile()
{
	cout << "enter file name: ";
	string file_name;
	getline(cin, file_name);
    ifstream input_file;
    input_file.open(file_name.c_str());
	if(!input_file.is_open())
	{
		cout << "file can not be opened!" << endl;
		return EXIT_FAILURE;
	}

	string file_line;
	getline(input_file, file_line);
	int donors_count = atoi(file_line.c_str());
	vector<Donor> file_donors;
	if(donors_count > 0)
	{
		for(int donor_iter = 0; donor_iter < donors_count; donor_iter++)
		{
			string temp_name, temp_donation;
			long donation;
			getline(input_file, temp_name);
			getline(input_file, temp_donation);
			donation = atol(temp_donation.c_str());
			Donor temp_donor;
			temp_donor.donation = donation;
			temp_donor.donor_name = temp_name;
			file_donors.push_back(temp_donor);
		}
	}
	else
	{
		cout << "too few donors!" << endl;
		return EXIT_FAILURE;
	}

	cout << "------------------------------\n";
	for (int it = 0; it < file_donors.size(); it++)
	{
		cout << file_donors.at(it).donor_name << " has donated "
			<< file_donors.at(it).donation << " money!" << endl;
	}

	return EXIT_SUCCESS;
}