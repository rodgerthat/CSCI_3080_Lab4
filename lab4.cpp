/* Author		: Norris, Joel R.
 * Class		: CSCI_3080 
 * Lab			: 4
 * Instructor	: Dr. Pettey
 * Description	: Ask the user for two arrays (matrices) and multiply them together. Then print the result.
 */
#pragma once
#include <iostream>

using namespace::std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

// these will hold the dimensions of the arrays
int AD[2];
int BD[2];
int CD[2];
// working arrays
int A[MAX_ROWS][MAX_COLS] = { 0 };
int B[MAX_ROWS][MAX_COLS] = { 0 };
int C[MAX_ROWS][MAX_COLS] = { 0 };
// iterators
int i, j, k;

int main()
{
	// get user array dimentions for first array
	cout << "Please input the row and column dimensions of the first array: ";
	for (i = 0; i<2; ++i) {
		switch (i) {
		case 0: cin >> AD[0]; break;
		case 1: cin >> AD[1]; break;
		}
	}

	// get first array from the user
	cout << "Please input array 1:" << endl;
	for (i = 0; i<AD[0]; ++i) {
		for (j = 0; j < AD[1]; ++j) {
			cin >> A[i][j];
		}
	}

	cout << "Test print out of array 1 : " << endl;
	for (i = 0; i<AD[0]; ++i) {
		for (j = 0; j < AD[1]; ++j) {
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	// get user array dimentions for second array
	cout << "Please input the row and column dimensions of the second array: ";
	for (i = 0; i<2; ++i) {
		switch (i) {
		case 0: cin >> BD[0]; break;
		case 1: cin >> BD[1]; break;
		}
	}

	// get first array from the user
	cout << "Please input array 2:" << endl;
	for (i = 0; i<BD[0]; ++i) {
		for (j = 0; j < BD[1]; ++j) {
			cin >> B[i][j];
		}
	}

	cout << "Test print out of array 2 : " << endl;
	for (i = 0; i<BD[0]; ++i) {
		for (j = 0; j < BD[1]; ++j) {
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}

	// check to see if the multiplication is possible
	if (AD[1] != BD[0]) {
		cout << "These arrays cannot be multiplied" << endl;
		return 0;
	}

	// calculate dimensions of array 3 ( answer array )
	CD[0] = AD[0];
	CD[1] = BD[1];

	// TODO : don't forget to make sure that array c knows how many rows & cols to print out. 
    return 0;
}

