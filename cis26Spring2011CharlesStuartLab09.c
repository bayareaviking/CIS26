#include <stdio.h>
#include <stdlib.h>

void exerciseInfo( void );
void menu( void );
int* interleaveArrayCharlesStuart( int*, int, int*, int );

int main() {

	exerciseInfo();
	menu();

	return 0;
}


void exerciseInfo() {
	
	printf( "CIS 26 – C Programming\n" );
	printf( "Laney College\n" );
	printf( "Charles Stuart\n" );
	printf( "Assignment Information --\n" );
	printf( "  Assignment Number:  Lab 09,\n" );
	printf( "                      Coding Assignment -- Exercise #1\n" );
	printf( "  Written by:         Charles Stuart\n" );
	printf( "  Submitted Date:     May 23, 2011\n" );

	return;
}

void menu( void ){

	int* iPtr1;
	int* iPtr2;
	int* iPtr3;
	
	int iArrayIndex1;
	int iArrayIndex2;

	int size1;
	int size2;
	int finalSize;
	int index;
	int option;
	int printOption;

	iPtr1 = NULL;
	iPtr2 = NULL;
	iPtr3 = NULL;


	do{
//print menu text
		printf( "\n\n\n" );
		printf( "********************************************************\n" );
		printf( "*                                                      *\n" );
		printf( "*                          MENU                        *\n" );
		printf( "*                                                      *\n" );
		printf( "*  1. Creating 2 arrays                                *\n" );
		printf( "*  2. Calling extractDigitOccurenceUpdateCharlesStuart *\n" );
		printf( "*  3. Calling interleaveArrayCharlesStuart             *\n" );
		printf( "*  4. Printing Array                                   *\n" );
		printf( "*  5. Quit                                             *\n" );
		printf( "********************************************************\n" );

		printf( "\n\nSelect an option : " );
		scanf( "%d", &option );

		switch ( option ){
			case 1 :

				printf( "Creating 2 arrays\n\n" );
				printf( "\tFor Array #1 :\n" );
				printf( "\t\tHow many integers do you have? " );
				scanf ( "%d", &size1 );
				iPtr1 = ( int* ) malloc( size1 + sizeof( int ) );
				iArrayIndex1 = 0;
				printf( "\n" );
				do{
					printf( "\n\t\t\tEnter integer #%d : ", ( iArrayIndex1 + 1 ) );
					scanf( "%d", &iPtr1[ iArrayIndex1 ] );
					iArrayIndex1++;
				}while( iArrayIndex1 != ( size1 ) );

				
				printf( "\tFor Array #2 : \n" );
				printf( "\t\tHow many integers do you have? " );
				scanf ( "%d", &size2 );
				iPtr2 = ( int* ) malloc( size2 + sizeof( int ) );
				
				iArrayIndex2 = 0;
				printf( "\n" );
				do{
					printf( "\n\t\t\tEnter integer #%d : ", ( iArrayIndex2 + 1 ) );
					scanf( "%d", &iPtr2[ iArrayIndex2 ] );
					iArrayIndex2++;
				}while( iArrayIndex2 != ( size2 ) );

				break;
			case 2 :
				if( ( iPtr1 != 0 ) && ( iPtr2 != 0 ) ){
					printf( "\nWe're sorry, but that function is unavailable at this time.  Please try another of our functions.  We apologize for any inconvenience.\n\n\n" );
				} else {
					printf( "\nYou have not created any arrays.  Please either create two arrays, or leave.\n" );
				}				
				break;
			case 3 :
				if( ( iPtr1 != 0 ) && ( iPtr2 != 0 ) ){
					printf( "Calling interleaveArrayCharlesStuart()\n" );
					iPtr3 = interleaveArrayCharlesStuart( iPtr1, size1, iPtr2, size2 );
				} else {
					printf( "\nYou have not created any arrays.  Please either create two arrays, or leave.\n" );
					
				}
				break;
			case 4 :
				if( ( iPtr1 != 0 ) && ( iPtr2 != 0 ) ){
					printf( "\nPrinting Array\n" );
					printf( "\tWhich array (1, 2, or 3?" );
					scanf( "%d", &printOption );
					switch( printOption ){
					case 1 :
						printf( "\t\n\n\tFor Array #1:\n" );
						printf( "\t\tSize : %d\n", size1 );
						printf( "\t\tValue(s) : " );
						index = 0;
						do{
							printf( "%d, ", iPtr1[ index ] );
							index++;
						}while ( index != ( size1 - 1 ) );
						printf( "%d", iPtr1[ index ] );
						break;
					case 2 :
						printf( "\t\n\n\tFor Array #2:\n" );
						printf( "\t\tSize : %d\n", size2 );
						printf( "\t\tValue(s) : " );
						index = 0;
						do{
							printf( "%d, ", iPtr2[ index ] );
							index++;
						}while ( index != ( size2 - 1 ) );
						printf( "%d", iPtr2[ index ] );
						break;
					case 3 :
						if( iPtr3 != 0 ){
							finalSize = size1 + size2 + 1;
							printf( "\t\n\n\tFor Array #3:\n" );
							printf( "\t\tSize : %d\n", finalSize );
							printf( "\t\tValue(s) : " );
							index = 0;
							do{
								printf( "%d, ", iPtr3[ index ] );
								index++;
							}while ( index != ( finalSize - 1 ) );
							printf( "%d", iPtr3[ index ] );
						}else{
							printf( "\nZero Pointer...\n" );
						}
						break;
					default :
						printf( "\nWe're sorry, we don't have an array for that number.  Please choose an array number between 1 and 3.\n" );
						break;
					}
				} else {
					printf( "\nZero Pointer(s)...\n" );
				}
				break;
			case 5 :
				//quit
				printf( "\nHave fun and goodbye!\n" );
				break;
			default :
				printf( "\nThat is not an option on the menu.  Please follow the parameters of the menu.\n\n" );
				break;
				}
	} while ( option != 5 );

	
	return;
}

int* interleaveArrayCharlesStuart( int* iPtr1, int size1, int* iPtr2, int size2 ) {
	int size3;
	int* iPtr3;
	
	int index1;
	int index2;
	int index3;
	int val;
	
	index1 = 0;
	index2 = 0;
	index3 = 0;

	size3 = size1 + size2 + 1;
	iPtr3 = ( int* ) malloc( size3 + sizeof( int ) );
	iPtr3[ index3 ] = size3;
	index3++;
	do{
		val = index3 % 2;
		if( ( index1 < size1 ) && ( index2 < size2 ) ){

			switch( val ){
			case 1 :
				iPtr3[ index3 ] = iPtr1[ index1 ];
				index1++;
				index3++;
				break;
			case 0 :
				iPtr3[ index3 ] = iPtr2[ index2 ];
				index2++;
				index3++;
				break;
			}
		}else if( index1 = size1 ){
			iPtr3[ index3 ] = iPtr2[ index2 ];
			index2++;
			index3++;
		}else if( index2 = size2 ){
			iPtr3[ index3 ] = iPtr1[ index1 ];
			index1++;
			index2++;
		}
	}while( index3 != ( size3 ) );

	return iPtr3;
}