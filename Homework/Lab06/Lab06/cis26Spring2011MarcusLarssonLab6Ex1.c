/***
	* Program Name: cis26Spring2011MarcusLarssonLab6Ex1.c
	* Written By: Marcus Larsson
	* Date Written: 04/13/2011
	*/

#include <stdio.h>

// Lab info prototype
void assignmentInfoMarcusLarsson( int, int, int, int );

// Assigned function prototype
void displayIntegerDigitMarcusLarsson( );

int main( ) {

	

	assignmentInfoMarcusLarsson( 6, 1, 4, 13 );


	// Making the function call
	displayIntegerDigitMarcusLarsson( );


	return 0;
}
void assignmentInfoMarcusLarsson( int arg1, int arg2, int arg3, int arg4 ) {

	printf( "\nCIS 26 - C Programming\nLaney College\nMarcus Larsson\n\nAssignment Information --\n  Assignment Number:   Lab 0%d, Coding Assignment -- Exercise #%d\n  Written by:          Marcus Larsson\n  Submitted Date:      0%d/%d/2011\n\n", arg1, arg2, arg3, arg4 );

	return;
}
void displayIntegerDigitMarcusLarsson( int arg ) {

	int inputValue;
	int test;
	int integer0;
	int integer1;
	int integer2;
	int integer3;
	int integer4;
	int integer5;
	int integer6;
	int integer7;
	int integer8;
	int integer9;

	printf( "Enter an integer: " );
	scanf( "%d", &inputValue );

	if ( inputValue < 0 ) {
	printf( "\nThe sign : -\n" );
	inputValue = (inputValue * -1);
	} else if ( inputValue > 0 ) {
	printf( "\nThe sign : +\n" );
	} else {
	printf( "\nThe sign : Zero is neither positive nor negative.\n" );
	}

	for ( integer0 = 0, integer1 = 0, integer2 = 0, integer3 = 0, integer4 = 0, integer5 = 0, integer6 = 0, integer7 = 0, integer8 = 0, integer9 = 0; inputValue != 0; inputValue /= 10 ) {
	test = inputValue % 10;
	//inputValue = inputValue / 10;
	switch ( test ) {
	case 0 :
	integer0++;
	break;
	case 1 :
	integer1++;
	break;
	case 2 :
	integer2++;
	break;
	case 3 :
	integer3++;
	break;
	case 4 :
	integer4++;
	break;
	case 5 :
	integer5++;
	break;
	case 6 :
	integer6++;
	break;
	case 7 :
	integer7++;
	break;
	case 8 :
	integer8++;
	break;
	case 9 :
	integer9++;
	break;
	default :
	printf( "That isn't and integer\n" );
	}
	}

	printf( "The counts of digits: \n" );
	printf( "\t0 %d\n", integer0 );
	printf( "\t1 %d\n", integer1 );
	printf( "\t2 %d\n", integer2 );
	printf( "\t3 %d\n", integer3 );
	printf( "\t4 %d\n", integer4 );
	printf( "\t5 %d\n", integer5 );
	printf( "\t6 %d\n", integer6 );
	printf( "\t7 %d\n", integer7 );
	printf( "\t8 %d\n", integer8 );
	printf( "\t9 %d\n", integer9 );

	return;
}