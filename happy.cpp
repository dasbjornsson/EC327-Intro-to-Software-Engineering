//David Thor Asbjornsson
//david92@bu.edu
//references: http://www.cplusplus.com
//program that prints the first 10,000 happy numbers

//activate libraries of commands that the program uses
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//initializing variables and a vector
	int x = 0;
	int y = 0;
	int z = 0;
	int tru;
	int i, j;
	int number = 0;
	vector<int> numbers;

	//only want the first 10000 happy numbers
	for (x = 1; numbers.size()<=10000; x++)
	{
		tru = x;
		y = x;
		z = 0;

		//one way to write the formula for a happy number in programming lanugage
		while ((x == y) && (z!=10000))
		{
			if (((x / 10) == 0) && x != 1)
			{
				x = x*x;
				y = x;
			}
			else if ((x / 10) > 0)
			{
				number = 0;
				while (x > 0)
				{
					number = number + (x % 10)*(x % 10);
					x = x / 10;
				}
				x = number;
				y = x;
				z++;
			}
			else if (x==1)
			{
				numbers.push_back(tru);
				y = x + 1;
			}
		}
		x = tru;
	}

	//write the happy numbers out
	for (j = 0; j<100; j++)
	{
		for (i = j*10; i < (j*10) + 10; i++)
		{
			cout << numbers[i] << " ";
		}
		cout << endl;
	}
	 

	return 0;

}