/*
* Programmer: Kollin Labowski
* Class: CS 350
* Description: This program loops a minimum of 5 times, and afterwards can be exited by inputting -1.
* It takes 3 inputs per loop, each of type double, and determines whether the 3 input numbers can form
* the 3 sides of a triangle.
*/

#include <stdio.h>

void main()
{
	//Determines the amount of loops that have passed
	int counter = 0;

	//While loop is always true because it will run indefinitely until the value -1 is input
	while(1)
	{
		double a = 0, b = 0, c = 0;

		if(counter >= 5)
			printf("Input '-1' for any side to quit the program\n\n");

		printf("Iteration #%d\n\n", counter + 1);

		while(a <= 0)
		{
			printf("What is your first side?\n");
			scanf("%lf", &a);

			if(counter >= 5 && a == -1)
			{
				printf("\nEnding program...\n");
				return;
			}
			else if(a <= 0)
			{
				printf("\nPlease enter a valid number greater than zero (cannot input sentinel value)\n\n");
			}

		}

		while(b <= 0)
		{
			printf("What is your second side?\n");
			scanf("%lf", &b);

			if(counter >= 5 && b == -1)
			{
				printf("\nEnding program...\n");
				return;
			}
			else if(b <= 0)
			{
				printf("\nPlease enter a valid number greater than zero (cannot input sentinel value)\n\n");
			}
		}

		while(c <= 0)
		{
			printf("What is your third side?\n");
			scanf("%lf", &c);

			if(counter >= 5 && c == -1)
			{
				printf("\nEnding program...\n");
				return;
			}
			else if(c <= 0)
			{
				printf("\nPlease enter a valid number greater than zero (cannot input sentinel value)\n\n");
			}
		}

		if(a <= 0 || b <= 0 || c <= 0)
		{
			printf("\nError: All inputs must be nonzero and positive floating point numbers\n");
			return;
		}

		int isTriangle = 0;

		if(a > b && a > c)
		{
			if(b + c > a)
				isTriangle = 1;
			else
				isTriangle = 0;
		}
		else if(b > a && b > c)
		{
			if(a + c > b)
				isTriangle = 1;
			else
				isTriangle = 0;
		}
		else
		{
			if(a + b > c)
				isTriangle = 1;
			else
				isTriangle = 0;
		}

		printf("\nSide 1: %lf,\nSide 2: %lf,\nSide 3: %lf\n\n", a, b, c);

		if(isTriangle)
			printf("YES, the given sides do form a triangle\n\n");
		else
			printf("NO, the given sides do NOT form a triangle\n\n");

		counter++;

		printf("--------------------------------------------------------------\n\n");
	}
}