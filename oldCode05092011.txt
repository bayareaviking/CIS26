/**
  * Program Name: cis26Spring2011InClass.c
  * Written By: Marcus Larsson
  */

#include <stdio.h>

void returnArrayIndexes( );

int main() {

	returnArrayIndexes( );

	return 0;
}
void returnArrayIndexes( ) {

	int i;
	int iB[ 20 ];

	printf( "\nStepping through the array. . .\n\n" );

	printf( "\n\tIndex\t\tValue\n" );
	printf( "\n\t-----\t\t-----\n" );

	for ( i = 0; i <= 19; i++ ) {
		iB[ i ] = i + 1;

		printf( "\n\t%d\t-\t%d\n", i, iB[ i ] );

	}

	printf( "\n\n\tThat's all!\n\n\n" );

	return;
}