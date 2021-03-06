/*********************************************************************************************
Class No.:
Student Name:
Student No.:
Date:
IDE version:
OS version:
Lab Assignment:
*********************************************************************************************/

/*********************************************************************************************

Analysis

	Inputs (data description your app accepts):

	Outputs (data description data your program produces and in what formats):

	Constraints (list ALL found in problem statement):

	Formulas (in any):

*********************************************************************************************/

/*********************************************************************************************

Design (Requires one level of step-wise refinement for all steps)

*********************************************************************************************/

/*********************************************************************************************

Testing (Minimum of one test case)

*********************************************************************************************/

//Implementation starts here

/*********************************************************************************************
Class No.:
Student Name:
Student No.:
Date:
IDE version:
OS version:
Lab Assignment:
*********************************************************************************************/

/*********************************************************************************************

Analysis

	Inputs (data description your app accepts):

	Outputs (data description data your program produces and in what formats):

	Constraints (list ALL found in problem statement):

	Formulas (in any):

*********************************************************************************************/

/*********************************************************************************************

Design (Requires one level of step-wise refinement for all steps)

*********************************************************************************************/

/*********************************************************************************************

Testing (Minimum of one test case)

*********************************************************************************************/

//Implementation starts here
/*
	Test Case
	Case #1: user enters T
	Case #2: user enter t
	Case #3: user enters any character a-z, A-Z, 0-9, except t, T, s, S
 */
#include <stdio.h>
#include <ctype.h>

#define _CRT_SECURE_NO_WARNINGS
#define TRIANGLE 'T'
#define SQUARE 'S'
#define LINE 'L'

void DrawSquare();      //draw a square
void DrawLine(int);		//input specififes # shapes to display
void DrawTriangle();    //draw a triangle
char GetUserInput();    //get the user input of t or s
int GetNumberOfShapes();

int main()
{
	char user_selection;
	int iterator;

	do
	{
		user_selection = GetUserInput();

		//draw the selected shape
		switch (user_selection)
		{
		case TRIANGLE:
			iterator = GetNumberOfShapes();
			for (int loopCounter = 0; loopCounter < iterator; loopCounter++)
			{
				DrawTriangle();
			}
			break;
		case SQUARE:
			iterator = GetNumberOfShapes();
			for (int loopCounter = 0; loopCounter < iterator; loopCounter++)
			{
				DrawSquare();
			}
			break;
		case LINE:
			iterator = GetNumberOfShapes();
			DrawLine(iterator);
			break;
		case 'E':
			break;
		default:
			printf("There is an error in the selection!\n");  //default error message
		}
		while (getchar() != '\n'); //clear the stdin buffer for cases like, {'e''\n'} or {'s''\n'} or {'t''\n'}
	} while (user_selection != 'E');

	return 0;
}
void DrawSquare()
{
	printf("***********\n");
	printf("*         *\n");
	printf("*         *\n");
	printf("*         *\n");
	printf("***********\n");
}
void DrawLine(int count)
{
	for (int index = 0; index < count; index++)
	{
		printf("***********\n");
	}
}
void DrawTriangle()
{
	printf("     *     \n");
	printf("    * *    \n");
	printf("   *   *   \n");
	printf("  *     *  \n");
	printf(" ********* \n");
}
char GetUserInput()
{
	char selection;
	printf("t Triangle\n");
	printf("s Square\n");
	printf("l Line\n");
	printf("e to exit\n");
	printf("Select a shape to display: ");
	scanf("%c", &selection);
	return toupper(selection);
}

int GetNumberOfShapes()
{
	int iterator;
	printf("Enter the # of shapes to display: ");
	scanf("%d", &iterator);
	return iterator;
}
