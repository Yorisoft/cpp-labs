// This is the Group Lab that I am working on individually first. This lab is
// dealing with switch case and if/else if statements
// Online Music Store
// Programmer Jil Patel, Yelsin Sepulveda, Francisco Garcia, Ashley Laing
// Last modified 07/3/2017

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	system("color 2f");
	system("title Switch case lab    by Team Purple");

	cout
		<< endl
		<< "\t\t            Switch case group lab                         \n"
		<< "\t\t             on line music store                          \n"
		<< "\t\t    also needs nested if ... else statment                \n"
		<< "\t\t          and the conditional oprater                     \n"
		<< "\t\t                By Team Purple                            \n\n";

	const double
		PRICE_A = 4.99,
		PRICE_B = 9.99,
		PRICE_C = 14.99,
		EXTRA_SONG_RATE_A = 0.99,
		EXTRA_SONG_RATE_B = 0.59,
		EXTRA_SONG_RATE_C = 0.29,
		SALES_TAX = 0.06;

	const int 
		FREE_SONG_A = 10,
		FREE_SONG_B = 20,
		FREE_SONG_C = 30;
	double price, extra_charge,free_song;
	double Songs;
	char pakage;

	while (true) {
		cout
			<< setprecision(2)<<fixed
			<< "\n\n  Here are the posible option packages offered in our store \n"
			<< "  Pakage A: Monthly fee $" << PRICE_A << ". " << FREE_SONG_A << " free songs and $" << EXTRA_SONG_RATE_A << " per song after that. \n"
			<< "  Pakage B: Monthly fee $" << PRICE_B << ". " << FREE_SONG_B << " free songs and $" << EXTRA_SONG_RATE_B << " per song after that. \n"
			<< "  Pakage C: Monthly fee $" << PRICE_C << ". " << FREE_SONG_C << " free songs and $" << EXTRA_SONG_RATE_C << " per song after that. \n";

		cout << "\n Please select the option package that you have? ";
		cin >> pakage;
		cin.ignore(100, '\n');

		switch (pakage) {
		case 'A':
		case 'a':
			pakage = 'A' && 'a';
			price = PRICE_A;
			extra_charge = EXTRA_SONG_RATE_A;
			free_song = FREE_SONG_A;
			break;
		case 'B':
		case 'b':
			pakage = 'B' && 'b';
			price = PRICE_B;
			extra_charge = EXTRA_SONG_RATE_B;
			free_song = FREE_SONG_B;
			break;
		case 'C':
		case 'c':
			pakage = 'C' && 'c';
			price = PRICE_C;
			extra_charge = EXTRA_SONG_RATE_C;
			free_song = FREE_SONG_C;
			break;

		default:
			cout << "\n\t\t****sorry we do not offer that pakage \n\n\n";
			system("pause");
			continue;
		}

		cout << "How many songs did you download? ";
		cin >> Songs;
		cin.ignore(100, '\n');

		if (Songs < 0) {
			cout << " \n\t\t****you cannot have nagative number of Songs! \n\n";
		}
		else if ((int)(Songs) != Songs) {
			cout << "\n\t\t****your number of songs need to be a whole number!\n\n";
		}

		else if (Songs <= free_song) {
			cout
				<< setprecision(2) << fixed
				<< "\n\tYour total bill for this month is $" << price << " + " << price * SALES_TAX << " (for tax) = " << price + price * SALES_TAX << ".\n"
				<< "\tYou have " << int(free_song) - int(Songs) << " free " << (free_song - Songs == 1 ? "song left.\n\n" : "songs left.\n\n\n");
		}

		else {
			double total = price + (Songs - free_song)*extra_charge;
			cout
				<< setprecision(2) << fixed
				<< "\nYour total bill for this month is $" << total << " + " << total * SALES_TAX << " (for tax) = " << total + total * SALES_TAX << ".\n"
				<< "\tYou have $" << (Songs - free_song)*extra_charge << " for having " << int(Songs) - int(free_song) << " more " << (Songs - free_song == 1 ? "song " : "songs ") << "\n\tthan your monthly limit of " << int(free_song) << " free songs.\n\n";
		}

		system("pause");
		cout << "\n\n\t\t ************************************ \n\n";
	}
	return 0;
}