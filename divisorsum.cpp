//David Thor Asbjornsson
//david92@bu.edu
//references: http://www.cplusplus.com
//a program which prints the proper divisor sum
//of the integers from 2 to 1000, inclusive, one value per line.

//activating a library of commands that the program uses
#include <iostream>
using namespace std;

int main()
{
	//initializing variables
	int x, t, z;
	int sam = 1;


	cout << "Divisors of numbers 2 - 1000: " << endl;
	
	//numbers from 2-1000
	for (t = 2; t < 1001; t++)
	{
		//take care of 1 as a special case
		sam = 1;
		cout << t << ": 1";

		//finding divisors of numbers from 2-1000, one number at a time
		for (int i = 2; i <= (t / 2); i++)
		{
			z = t / i;

			//print out the divisors and the divisor sum for each number
			if ((z*i) == t)
			{

				cout << " + " << i;
				sam = sam + i;
			}
		}
		cout << " = " << sam << endl ;
	}
	
	return 0;

}