// GustaveRosanio_DynamicArray.cpp

#include "stdafx.h"
#include "DynamicArray.h"
#include <iostream>

using namespace std;
using namespace gus_rosanio_array;


int main()
{
	DynamicArray new_array;
	cout << "The number in the array is: ";
	for (int i = 0; i < new_array.get_next(); i++)
	{
		cout << new_array[i];
	}
	cout <<  " " << endl;

	cout << "Add some numbers to the array. Enter 'q' when you are done" << endl;
	int j = 0;
	while (j != -1)
	{
		cout << "add numbers to the array: ";
		char element;
		cin >> element;
		if (element == 'q' || element == 'Q')
		{
			j = -1;
		}
		else if (element == '0' || element == '1' || element == '2' || element == '3' || element == '4' ||
			     element == '5' || element == '6' || element == '7' || element == '8' || element == '9')
		{
			new_array.add_element(element);
			j++;
		}
		else
		{
			cout << "Error. Not a number." << endl;
		}
	}

	cout << "The numebr in the array is: ";
	for (int i = 0; i < new_array.get_next(); i++)
	{
		cout << new_array[i];
	}
	cout << " " << endl;
	cout << "The next empty spot in the array is: [" <<  new_array.get_next() << "]" << endl;
	cout << "The maximum size of the array is: " << new_array.get_size() << endl;

	new_array.~DynamicArray();
	
	/*
	// I WAS NEVER ABLE TO GET THE USER INPUT TO GET PUT INTO THE ARRAY ITESELF.
	// WHEN IMPLMENTED, I KEEP GETTING ACCESS VIOLATIONS.

	char * user_input;
	user_input = new char[10];
	cout << "Please enter your number now: ";
	cin >> user_input;

	DynamicArray param_array(user_input);

	cout << "The number in the array is: ";
	for (int i = 0; i < param_array.get_next(); i++)
	{
		cout << param_array[i];
	}
	cout << " " << endl;

	cout << "Add some numbers to the array. Enter 'q' when you are done" << endl;
	int k = 0;
	while (k != -1)
	{
		cout << "add numbers to the array: ";
		char element;
		cin >> element;
		if (element == 'q' || element == 'Q')
		{
			k = -1;
		}
		else if (element == '0' || element == '1' || element == '2' || element == '3' || element == '4' ||
			     element == '5' || element == '6' || element == '7' || element == '8' || element == '9')
		{
			param_array.add_element(element);
			k++;
		}
		else
		{
			cout << "Error. Not a number." << endl;
		}
	}

	cout << "The numeber in the array is: ";
	for (int i = 0; i < param_array.get_next(); i++)
	{
		cout << param_array[i];
	}
	cout << " " << endl;
	cout << "The next empty spot in the array is: [" << param_array.get_next() << "]" << endl;
	cout << "The maximum size of the array is: " << param_array.get_size() << endl;

	param_array.~DynamicArray();
	*/
	system("pause");
    return 0;
}

