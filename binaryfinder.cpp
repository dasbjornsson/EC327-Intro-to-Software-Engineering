//David Thor Asbjornsson
//david92@bu.edu
//references: http://www.cplusplus.com
//program that will determine if a particular sequence of binary digits appears in a number.

//activating the libraries that the program uses
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

//initializing vectors
vector <int> number1, number2;

//initializing an iterator
vector <int>::iterator it;

int main()
{
			//ask for a number and a sequence
			cout << "Enter a positive number and a binary sequence: " << endl;
			int x, y;
			cin >> x >> y;
			int j = y;
			int i = x;

			//return an error message if the number is negative
			if (x < 0)
			{
				cout << "Number must be positive!" << endl;
			}

			//return an error message if the sequence is negative
			else if (y<0)
			{
				cout << "Sequence must be positive!" << endl;
				return 0;
			}

			//store the sequence in a vector and make sure it is binary
			while (y>0)
			{
				int a = y % 10;

				if ((a == 1) || (a == 0))
				{
					number2.push_back(y % 10);
					y = y / 10;
				}

				//return an error message if the sequence is not binary
				else
				{
					cout << "Sequence must be binary!" << endl;
					return 0;
				}
			}

			//end the program if the number is negative
			if (x < 0)
			{
				return 0;
			}

			//change the number to binary
			while (x > 0)
			{
				number1.push_back(x % 2);
				x = x / 2;
			}

			//search for the sequence in the sequence of the number 
			it = search(number1.begin(), number1.end(), number2.begin(), number2.end());
			
			//if the sequence is found the program returns that it occurs
			if (it != number1.end())
			{
				cout << "Sequence " << j << " occurs in " << i << "." << endl;
			}

			//if it isn't found the program returns that it doesn't occur
			else
			{
				cout << "Sequence " << j << " does not occur in " << i << "." << endl;
			}

	return 0;
}