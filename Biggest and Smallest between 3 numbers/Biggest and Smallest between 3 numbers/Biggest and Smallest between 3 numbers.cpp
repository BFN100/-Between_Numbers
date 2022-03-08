/*
Author: Bianca Fernandes Nascimento
Language: C++
Objective: It will show smaller and smaller numbers among those entered by the user, having two external functions.
Made in Visual Studio
*/

#include<iostream>
#include<algorithm>

using namespace std;
 
int smallest(int, int, int); // smallest function declaration
int biggest(int, int, int); // Biggest function declaration


int main() {

	int min, max, n1, n2, n3; // the variables

	//Receiving the numbers entered by the user

	cout << "Please write 3 numbers: " << endl; 
	cin >> n1;
	cin >> n2;
	cin >> n3;

	// after performing the processing of the functions here, it will return to the user the answer of the smallest and largest number:
	cout << "The Smallest number between the 3 is:" << smallest(n1, n2, n3) << endl;
	cout << "The Biggst number between the 3 is:" << biggest(n1, n2, n3) << endl;

	return 0;
}

int smallest (int n1, int n2, int n3) 
{

	int min, max;

	if ((n2 >= n1) && (n1 <= n3)) //if n2 is greater than or equal to n1 and n1 less than or equal to n3
	{
		min = n1; // n1 will be the smallest number
		return n1;

	}
	else if ((n1 >= n2) && (n2 <= n3))  //if n1 is greater than or equal to n2 and n2 less than or equal to n3
	{ 
		min = n2; // n2 will be the smallest number
		return n2;

	}
	else {

		min = n3; // in other cases n3 will be the smallest number:
		return n3;

	}
}

int biggest(int n1, int n2, int n3) {

	int min, max;

	if ((n2 <= n1) && (n1 >= n3)) //if n2 is less than or equal to n1 and n1 is greater than or equal to n3
	{
		max = n1; // n1 will be the biggest number
		return n1;

	}
	else if ((n1 <= n2) && (n2 >= n3)) //if n1 is less than or equal to n2 and n2 is greater than or equal to n3
	{ 
		max = n2; // n2 will be the biggest number
		return n2;

	}
	else // in other cases:
	{

		max = n3; // n3 will be the biggest number
		return n3;

	}
}

