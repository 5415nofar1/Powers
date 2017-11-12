#include <iostream>
#include <math.h> 
#include <iomanip>
using namespace std;

#define NUMBER 3
#define MAX_POWER_VALUE 10000



int main()
{
	size_t power = 0;
	size_t powerResult = 0;

	cout << "--------------------------------------" << endl;
	cout << "\t" << NUMBER << "^" << "p" << " = " << setw(8) << left << dec << "dec" << "," << setw(8) << left << "hex" << endl;
	cout << "--------------------------------------" << endl;

	do {

		powerResult = pow(NUMBER, power);
		cout << "\t" << NUMBER << "^" << power << " = " << setw(8) << left << dec << powerResult << "," << setw(8) << left << hex << powerResult << endl << endl;
		power++;

	} while (MAX_POWER_VALUE > powerResult);


	return 0;
}