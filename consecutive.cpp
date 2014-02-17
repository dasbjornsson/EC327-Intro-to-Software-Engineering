//David Thor Asbjornsson
//david92@bu.edu
//references: http://www.cplusplus.com
//program that continuously reads integers from the console input (`cin`)
//until four consecutive integers are found, or the end - of - file is encountered


//activating command libraries that the program uses
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	//initializing vectors;
	vector<int> numbers;
	vector<int> quad;

	//initializing a stream;
	ifstream  in;

	//initializing a variable
	int number;

	//opening a text file(a number file)
	in.open("numbers.txt");

	//keep adding the numbers from the file to the back of a vector until there are no more numbers to add
	while (in >> number)
	{
		numbers.push_back(number);
	}

	//search for 4 consecutive integers and return a message that tells the user what numbers were found as a quadruplet
	for (int i = 1; numbers.size() > i; i++)
	{
		if ((numbers[i] == numbers[i - 1] + 1) && (numbers[i+1] == numbers[i]+1) && (numbers[i+2] == numbers[i+1] + 1))
		{
			cout << "Quadruplet found: " << numbers[i - 1] << " " << numbers[i] << " " << numbers[i + 1] << " " << numbers[i + 2] << endl;
			return 0;
		}
	}
	
	return 0;
}

