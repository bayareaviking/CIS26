/***
	* Program Name:	cis26Spring2011MarcusLarssonLab5Ex1.c
	* Written by:		Marcus Larsson
	* Date Written:	04/01/2011
	*/

#include <stdio.h>

// Assignment information
void assignmentInfoMarcusLarsson( int, int, int, int );

// Assignment function prototypes
int printSorted3IntegerMarcusLarsson( int, int, int );

int printSorted4IntegerMarcusLarsson( int, int, int, int );



int main( ) {
	
	int averageOfIntegers;

	assignmentInfoMarcusLarsson( 5, 1, 4, 13 );

	// First call
	printSorted3IntegerMarcusLarsson( -454, 363, 272 );

	averageOfIntegers = printSorted4IntegerMarcusLarsson( -454, 363, 272, -36 );

	printf( "\nThe average value of those four integers is: %d\n\n", averageOfIntegers );

	// Second call
	printSorted3IntegerMarcusLarsson( 180, -545, 9 );

	averageOfIntegers = printSorted4IntegerMarcusLarsson( 180, -545, 9, 360 );

	printf( "\nThe average value of those four integers is: %d\n\n", averageOfIntegers );

	return 0;
}
void assignmentInfoMarcusLarsson( int arg1, int arg2, int arg3, int arg4 ) {

	printf( "\nCIS 26 - C Programming\nLaney College\nMarcus Larsson\n\nAssignment Information --\n  Assignment Number:   Lab 0%d, Coding Assignment -- Exercise #%d\n  Written by:          Marcus Larsson\n  Submitted Date:      0%d/%d/2011\n\n", arg1, arg2, arg3, arg4 );

	return;
}
int printSorted3IntegerMarcusLarsson( int arg1, int arg2, int arg3 ) {
	int temp;
	int averageVal;

	// Finding the largest value
	if ( arg1 < arg2 ) {
		temp = arg1;
		arg1 = arg2;
		arg2 = temp;
	}
	if ( arg1 < arg3 ) {
		temp = arg1;
		arg1 = arg3;
		arg3 = temp;
	}

	// Finding the second and third largest values
	if (arg2 < arg3 ) {
		temp = arg2;
		arg2 = arg3;
		arg3 = temp;
	}

	printf( "\nThree integers, from largest to smallest:\n%d\n%d\n%d\n", arg1, arg2, arg3 );

	// Finding the average of the three integers
	averageVal = ( arg1 + arg2 + arg3 ) / 3;

	return averageVal;
}
int printSorted4IntegerMarcusLarsson( int arg1, int arg2, int arg3, int arg4 ) {
	int temp;
	int averageVal;

	// Finding the largest value
	if ( arg1 < arg2 ) {
		temp = arg1;
		arg1 = arg2;
		arg2 = temp;
	}
	if ( arg1 < arg3 ) {
		temp = arg1;
		arg1 = arg3;
		arg3 = temp;
	}
	if ( arg1 < arg4 ) {
		temp = arg1;
		arg1 = arg4;
		arg4 = temp;
	}

	// Finding the second largest value
	if (arg2 < arg3 ) {
		temp = arg2;
		arg2 = arg3;
		arg3 = temp;
	}
	if (arg2 < arg4 ) {
		temp = arg2;
		arg2 = arg4;
		arg4 = temp;
	}

	// Finding the third and fourth largest values
	if (arg3 < arg4 ) {
		temp = arg3;
		arg3 = arg4;
		arg4 = temp;
	}

	printf( "\nFour integers, from largest to smallest:\n%d\n%d\n%d\n%d\n", arg1, arg2, arg3, arg4 );

	// Finding the average of the four integers
	averageVal = ( arg1 + arg2 + arg3 + arg4 ) / 4;

	return averageVal;
}