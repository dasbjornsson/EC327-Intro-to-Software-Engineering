//David Thor Asbjornsson
//david92@bu.edu
//references: http://www.cplusplus.com
//a program that will prompt the user for an integer Y, and
//respond with all integers x such that  Y in base x is a palindromic number.

//activating libraries of commands that the program uses
#include <iostream>
#include <vector>
using namespace std;

//initializing vectors
vector <int> number1, number2;

//initializing a variable
int palornot;

int main()
{
	//ask for a number
	cout << "Enter the number to test for palindromicity: " << endl;
	int y;
	cin >> y;

	//store the real value of the input in another variable so I can work with the value
	int j = y;

	//checking bases from 2 to the input value
	for (int x = 2; x < j; x++)
	{
		y = j;
		
		//clear vectors so previous numbers dont interfere with the results
		number1.clear();
		number2.clear();
		while (y > 0)
		{
			number1.push_back(y % x);
			y = y / x;
		}

		//reset a sum variable
		palornot = 0;

		for (int z = 0; z < (number1.size() / 2); z++)
		{
			int a = number1[z] - number1[number1.size() - (z + 1)];
			number2.push_back(abs(a));
			palornot = palornot + (number2[z]);

		}
	
		if (palornot == 0)
		{
			cout << x << endl;
		}
		
	}

	return 0;
}