//David Thor Asbjornsson
//david92@bu.edu
//references: http://www.cplusplus.com
// a program that asks for a integer and tells the user if it is a perfect number or not

////activate libraries of commands that the program uses
#include <iostream>
using namespace std;

//initializing a variable
int x = 1;

//the function that calculates if a number is perfect or not
bool is_perfect(int x)
{
	int sam = 1;
	for (int i = 2; i <= (x / 2); i++)
	{
		int z = x / i;
		if ((z*i) == x)
		{
			sam = sam + i;
		}
	}
	if (x == sam)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//the main function, that asks for a integer, receives the integer
//puts it into the function that I defined above and returns if the integer is perfect or not
int main()
{
	while (x!=0)
	{
		cout << "Enter an integer: " << endl;
		cin >> x;
		
		if (is_perfect(x)==true)
			{
				cout << x << " is perfect!" << endl;
			}
			else
			{
				cout << x << " is not perfect!" << endl;
			}
	}
	cout << "Goodbye!" << endl;
	return 0;
}
	