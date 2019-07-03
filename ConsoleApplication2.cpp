// ConsoleApplication2.cpp : Defines the entry point for the console application.
// Jason Diaz Problem 2

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	int primeTerm = 1008514753, check = 0; // primeTerm - The initial term we use; check - used to check for a remainder

		for ( int divisor = 2; divisor < primeTerm; divisor++) // I started the loop at 2 that way I could use the looper as a divisor.
			//Aslong as the divisor stays smaller than the primeTerm the loop will keep going
		{
			
			check = primeTerm % divisor;
		
			if (check == 0) {
				primeTerm = primeTerm / divisor; // updates to the next highest prime number
				
			}


	}
		cout << primeTerm << endl;
		cin.get();
    return 0;
}

