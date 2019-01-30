/***
	* Program Name:	cis26Spring2011MarcusLarssonLab7Ex1.c
	* Written By:		Marcus Larsson
	* Date Written:	04/24/2011
	*/

#include <stdio.h>

// Prototype for program information function
void assignmentInfoMarcusLarsson( int, int, int, int );

// Prototype for assigned function
int extractDigitOccurenceMarcusLarsson( int, int [ ], int );

int main( ) {

	int value;
	int array1[ 3 ] = { 1387, -1378, 43237 };
	int array2[ 4 ] = { 2439, -42418, 43237, 5608 };
	int array3[ 5 ] = { 2439, -42418, 43237, 5608, -1378 };
	int array4[ 6 ] = { 2439, -42418, 43237, 22168, -1378, 1134 };

	
	// Calling the function for program info
	assignmentInfoMarcusLarsson( 7, 1, 4, 27 );


	// The following printf() statements and formatting borrowed from Charles Stuart, with permission.
	printf( "\n\n\nFirst call to extractDigitOccurenceMarcusLarsson() --" );
	value = extractDigitOccurenceMarcusLarsson( 3, array1, 3 );
	printf( "\n\n\tCurrent array information and values: ");
	printf( "\n\t  Size\t : 3" );
	printf( "\n\t  Element Index 0 : %d", array1[ 0 ] );
	printf( "\n\t  Element Index 1 : %d", array1[ 1 ] );
	printf( "\n\t  Element Index 2 : %d", array1[ 2 ] );
	printf( "\n\n\tThe specified digit : 3" );
	printf( "\n\n\tThere are %d occurences of digit 3 in the given values.", value );


	printf( "\n\n\nSecond call to extractDigitOccurenceMarcusLarsson() --" );
	value = extractDigitOccurenceMarcusLarsson( 6, array2, 4 );
	printf( "\n\n\tCurrent array information and values: ");
	printf( "\n\t  Size\t : 4" );
	printf( "\n\t  Element Index 0 : %d", array2[ 0 ] );
	printf( "\n\t  Element Index 1 : %d", array2[ 1 ] );
	printf( "\n\t  Element Index 2 : %d", array2[ 2 ] );
	printf( "\n\t  Element Index 3 : %d", array2[ 3 ] );
	printf( "\n\n\tThe specified digit : 6" );
	printf( "\n\n\tThere is %d occurence of digit 6 in the given values.", value );

	
	printf( "\n\n\nThird call to extractDigitOccurenceMarcusLarsson() --" );
	value = extractDigitOccurenceMarcusLarsson( 7, array3, 5 );
	printf( "\n\n\tCurrent array information and values: ");
	printf( "\n\t  Size\t : 5" );
	printf( "\n\t  Element Index 0 : %d", array3[ 0 ] );
	printf( "\n\t  Element Index 1 : %d", array3[ 1 ] );
	printf( "\n\t  Element Index 2 : %d", array3[ 2 ] );
	printf( "\n\t  Element Index 3 : %d", array3[ 3 ] );
	printf( "\n\t  Element Index 4 : %d", array3[ 4 ] );
	printf( "\n\n\tThe specified digit : 7" );
	printf( "\n\n\tThere are %d occurences of digit 7 in the given values.", value );


	printf( "\n\n\nFourth call to extractDigitOccurenceMarcusLarsson() --" );
	value = extractDigitOccurenceMarcusLarsson( 5, array4, 6 );
	printf( "\n\n\tCurrent array information and values: ");
	printf( "\n\t  Size\t : 6" );
	printf( "\n\t  Element Index 0 : %d", array4[ 0 ] );
	printf( "\n\t  Element Index 1 : %d", array4[ 1 ] );
	printf( "\n\t  Element Index 2 : %d", array4[ 2 ] );
	printf( "\n\t  Element Index 3 : %d", array4[ 3 ] );
	printf( "\n\t  Element Index 4 : %d", array4[ 4 ] );
	printf( "\n\t  Element Index 5 : %d", array4[ 5 ] );
	printf( "\n\n\tThe specified digit : 5" );
	printf( "\n\n\tThere are %d occurences of digit 5 in the given values.\n\n", value );

	// End of borrowed code, (modified to call my own function and variables.)



	return 0;
}
// Assigned function
int extractDigitOccurenceMarcusLarsson( int arg, int functionArray[], int size ) {
	int iteration[ 10 ] = { 0 };
	int i;
	int div;
	int index;


	for ( i = 0; i <= ( size - 1 ); i++ ){

		div = functionArray[ i ];

		while ( div != 0 ) {
			if ( div < 0 ) {
				div *= -1;
			}
			index = div % 10;
			div /= 10;
			iteration[ index ]++;
		}
	}

	return iteration[ arg ];
}

// Program info function
void assignmentInfoMarcusLarsson( int arg1, int arg2, int arg3, int arg4 ) {

	printf( "\nCIS 26 - C Programming\nLaney College\nMarcus Larsson\n\nAssignment Information --\n  Assignment Number:   Lab 0%d, Coding Assignment -- Exercise #%d\n  Written by:          Marcus Larsson\n  Submitted Date:      0%d/%d/2011\n\n", arg1, arg2, arg3, arg4 );

	return;
}