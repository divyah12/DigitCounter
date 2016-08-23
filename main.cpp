//**************************************************************
//                   Project #0 Digit Processing
//                   Name: Divya
//                   Algorithms 5243 Date: 01/25/2016
//***************************************************************
//      Basically, This program reads the dataset from a file and 
//      counts the number of times each digit exist in the file.
//      I have used visual studio to run and execute the program.
//      If executed outside the environment then an file path to "inputtext.txt"
//      must be updated(dataset file).
//*****************************************************************
#include <iostream>
#include <fstream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;
int n,m;

int main()
{
	int digit[10], x;
	cin >> n;
	cout << n << endl;

	for (int i = 0;i < 10; i++) {
		digit[i] = 0;
	}
	while (n!=0)
	{
		x = n % 10;
		n /= 10;
		if (x == 0) digit[0]++;
		if (x == 1) digit[1]++;
		if (x == 2) digit[2]++;
		if (x == 3) digit[3]++;
		if (x == 4) digit[4]++;
		if (x == 5) digit[5]++;
		if (x == 6) digit[6]++;
		if (x == 7) digit[7]++;
		if (x == 8) digit[8]++;
		if (x == 9) digit[9]++;
	}
	for (int j = 0;j < 10; j++) {
		cout << digit[j];
	}

	cin.get();
	cin.get();

	
}
//*******************************************************************
//                      ObjectName::main()
//                     Complexity: O(N)
//   The loop runs for the length of the input dataset, whose complexity is O(N).
//   This program takes each char from the dataset and comapares with each digit and 
//   counts to the corresponding digit, which is printed out at the end.
//********************************************************************

//I have written the entire program as turned in and have not copied this code, or parts of this code from the internet or another student.

																						//Signature____________________


