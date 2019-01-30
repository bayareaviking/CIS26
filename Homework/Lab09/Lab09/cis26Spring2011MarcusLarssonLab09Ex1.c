/***
	* Program Name:	cis26Spring2011MarcusLarssonLab9Ex1.c
	* Written By:		Marcus Larsson
	* Date Written:	05/21/2011
	*/

#include <stdio.h>
#include <stdlib.h>

// Prototype for program information function
void assignmentInfoMarcusLarsson( int, int, int, int );
void menu( void );
int* interleaveArrayMarcusLarsson( int*, int, int*, int );

int main( ) {

	// Calling the function for program info
	assignmentInfoMarcusLarsson( 9, 1, 5, 23 );

	// Calling the menu
	menu( );

	return 0;
}
// Program info function
void assignmentInfoMarcusLarsson( int arg1, int arg2, int arg3, int arg4 ) {

	printf( "\nCIS 26 - C Programming\nLaney College\nMarcus Larsson\n\nAssignment Information --\n  Assignment Number:   Lab 0%d, Coding Assignment -- Exercise #%d\n  Written by:          Marcus Larsson\n  Submitted Date:      0%d/%d/2011\n\n", arg1, arg2, arg3, arg4 );

	return;
}
// Function to call the menu
void menu( void ) {
	int index1;
	int index2;

	int size1;
	int size2;
	int size;
	int index;
	int option;
	int output;

	int* ptr1;
	int* ptr2;
	int* ptr3;
	ptr1 = 0;
	ptr2 = 0;
	ptr3 = 0;

	do {
		printf( "\n\n********************************************************" );
		printf( "\n*                          MENU                        *" );
		printf( "\n*  1. Creating 2 arrays                                *" );
		printf( "\n*  2. Calling extractDigitOccurenceUpdateMarcusLarsson *" );
		printf( "\n*  3. Calling interleaveArrayMarcusLarsson             *" );
		printf( "\n*  4. Printing Array                                   *" );
		printf( "\n*  5. Quit                                             *" );
		printf( "\n********************************************************\n" );

		printf( "\n\nSelect an option : " );
		scanf( "%d", &option );

		switch ( option ) {
			case 1 :
				printf( "Creating two arrays\n\n" );
				printf( "\tFor array 1 :\n\n" );
				printf( "\tHow many integers would you like? " );
				scanf( "%d", &size1 );
				ptr1 = ( int* ) malloc( size1 + sizeof( int ) );
				index1 = 0;
				printf( "\n" );
				do {
					printf( "\n\t\t\tEnter integer %d : ", ( index1 + 1 ) );
					scanf( "%d", &ptr1[ index1 ] );
					index1++;
				} while ( index1 != ( size1 ) );
				
				printf( "\tFor array 2 : \n\n" );
				printf( "\tHow many integers would you like? " );
				scanf( "%d", &size2 );
				ptr2 = ( int* ) malloc( size2 + sizeof( int ) );
				
				index2 = 0;
				printf( "\n" );
				do {
					printf( "\n\t\t\tEnter integer %d : ", ( index2 + 1 ) );
					scanf( "%d", &ptr2[ index2 ] );
					index2++;
				} while ( index2 != ( size2 ) );

				break;
			case 2 :
				if ( ( ptr1 != 0 ) && ( ptr2 != 0 ) ) {
					printf( "\nCannot perform that function, it does not exist.\n" );
				} else {
					printf( "\nYou have not created any arrays yet!\n" );
				}				
				break;
			case 3 :
				if ( ( ptr1 != 0 ) && ( ptr2 != 0 ) ) {
					printf( "Calling interleaveArrayMarcusLarsson()\n" );
					ptr3 = interleaveArrayMarcusLarsson( ptr1, size1, ptr2, size2 );
				} else {
					printf( "\nYou STILL haven't created any arrays!\n" );
					
				}
				break;
			case 4 :
				if ( ( ptr1 != 0 ) && ( ptr2 != 0 ) ) {
					printf( "\nPrinting Array\n" );
					printf( "\tChoose an array [ 1, 2, or 3 ]: " );
					scanf( "%d", &output );
					switch ( output ){
					case 1 :
						printf( "\n\n\tFor array 1:\n\n" );
						printf( "\tSize : %d\n", size1 );
						printf( "\tValue(s) : " );
						index = 0;
						do {
							printf( "%d, ", ptr1[ index ] );
							index++;
						} while ( index != ( size1 - 1 ) );
						printf( "%d", ptr1[ index ] );
						break;
					case 2 :
						printf( "\n\n\tFor array 2:\n\n" );
						printf( "\tSize : %d\n", size2 );
						printf( "\tValue(s) : " );
						index = 0;
						do {
							printf( "%d, ", ptr2[ index ] );
							index++;
						} while ( index != ( size2 - 1 ) );
						printf( "%d", ptr2[ index ] );
						break;
					case 3 :
						if ( ptr3 != 0 ){
							size = size1 + size2 + 1;
							printf( "\n\n\tFor array 3:\n\n" );
							printf( "\tSize : %d\n", size );
							printf( "\tValue(s) : " );
							index = 0;
							do {
								printf( "%d, ", ptr3[ index ] );
								index++;
							} while ( index != ( size - 1 ) );
							printf( "%d", ptr3[ index ] );
						} else {
							printf( "\nCan't do that either.\n" );
						}
						break;
					default :
						printf( "\nPlease choose an array number between 1 and 3.\n" );
						break;
					}
				} else {
					printf( "\nNo pointers declared.\n" );
				}
				break;
			case 5 :
				printf( "\nExiting. . .\n" );
				break;
			default :
				printf( "\nThat's not a menu option, try again.\n\n" );
				break;
				}
	} while ( option != 5 );

	return;
}
// Function to interleave two arrays
int* interleaveArrayMarcusLarsson( int* arg1, int arg2, int* arg3, int arg4 ) {
	int size;
	int* ptr;	
	int option;	

	int index1;
	int index2;
	int index3;
	index1 = 0;
	index2 = 0;
	index3 = 0;

	size = arg2 + arg4 + 1;
	ptr = ( int* ) malloc( size + sizeof( int ) );
	ptr[ index3 ] = size;
	index3++;
	do {
		option = index3 % 2;
		if ( ( index1 < arg2 ) && ( index2 < arg4 ) ){

			switch ( option ) {
			case 1 :
				ptr[ index3 ] = arg1[ index1 ];
				index1++;
				index3++;
				break;
			case 0 :
				ptr[ index3 ] = arg3[ index2 ];
				index2++;
				index3++;
				break;
			}
		} else if ( index1 = arg2 ) {
			ptr[ index3 ] = arg3[ index2 ];
			index2++;
			index3++;
		} else if ( index2 = arg4 ){
			ptr[ index3 ] = arg1[ index1 ];
			index1++;
			index2++;
		}
	} while ( index3 != ( size ) );

	return ptr;
}