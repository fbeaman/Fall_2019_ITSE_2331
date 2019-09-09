/*
	Foster Beaman

	Northwest Vista

	09092019 v 1.00

	Program is designed to print out Enviroment Array in columns consisting of INDEX number, Array
	Address, INDEX Address, string length of Array contents, and the Array contents.
*/

/*
PSEUDOCODE
	1. Prepare output for column layout.
	2. Set FOR loop with INDEX initialized to 0, loop terminating at envp == '\0', INDEX counting up every loop.
	3. Print the INDEX, &envp, &INDEX, string lenght of envp, and envp contents in accordance with column layout.
*/

#include "pch.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[], char* envp[] )
{
	cout << "Index		&envp[ix]		Ptr Adress		Length		Ptr Content" << endl;
	//Prepare output for columns. 

	for (int INDEX = 0; envp[INDEX] != '\0'; INDEX++) {
		//Instance INDEX and set FOR loop to terminate at nullptr with INDEX counting up every loop.

		cout << INDEX  << "		" << &envp[INDEX]  << "		" << &INDEX << "		" << strlen(envp[INDEX]) << "		" << envp[INDEX] << endl;
		//Cout INDEX number, &envp, &INDEX, string length of envp, and content of envp to match prepared columns.
	};
}
