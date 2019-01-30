
#include <stdio.h>


int extractDigitOccurenceCharlesStuart( int, int[], int );


int main(){
	int a;
	int value;
	int iArray1[ 3 ] = { 1387, -1378, 43237 };
	int iArray2[ 4 ] = { 2439, -42418, 43237, 5608 };
	int iArray3[ 5 ] = { 2439, -42418, 43237, 5608, -1378 };
	int iArray4[ 6 ] = { 2439, -42418, 43237, 22168, -1378, 1134 };

	printf( "CIS 26 - C Programming" );
	printf( "\nLaney College" );
	printf( "\nCharles Stuart" );
	printf( "\n\nAssignment Information --" );
	printf( "\n  Assignment Number:\tLab 07," );
	printf( "\n\t\t\tCoding Assignment -- Excercise #1" );
	printf( "\n  Written by:\t\tCharles Stuart " );
	printf( "\n  Submitted Date: \tApril 27, 2010 " );
	
	printf( "\n\n\nFirst call to extractDigitOccurenceCharlesStuart() --" );
	value = extractDigitOccurenceCharlesStuart( 3, iArray1, 3 );
	printf( "\n\n\tCurrent array information and values: ");
	printf( "\n\t  Size\t : 3" );
	printf( "\n\t  Element Index 0 : %d", iArray1[ 0 ] );
	printf( "\n\t  Element Index 1 : %d", iArray1[ 1 ] );
	printf( "\n\t  Element Index 2 : %d", iArray1[ 2 ] );
	printf( "\n\n\tThe specified digit : 3" );
	printf( "\n\n\tThere are %d occurences of digit 3 in the given values.", value );


	printf( "\n\n\nSecond call to extractDigitOccurenceCharlesStuart() --" );
	value = extractDigitOccurenceCharlesStuart( 6, iArray2, 4 );
	printf( "\n\n\tCurrent array information and values: ");
	printf( "\n\t  Size\t : 4" );
	printf( "\n\t  Element Index 0 : %d", iArray2[ 0 ] );
	printf( "\n\t  Element Index 1 : %d", iArray2[ 1 ] );
	printf( "\n\t  Element Index 2 : %d", iArray2[ 2 ] );
	printf( "\n\t  Element Index 3 : %d", iArray2[ 3 ] );
	printf( "\n\n\tThe specified digit : 6" );
	printf( "\n\n\tThere is %d occurence of digit 6 in the given values.", value );

	
	printf( "\n\n\nThird call to extractDigitOccurenceCharlesStuart() --" );
	value = extractDigitOccurenceCharlesStuart( 7, iArray3, 5 );
	printf( "\n\n\tCurrent array information and values: ");
	printf( "\n\t  Size\t : 5" );
	printf( "\n\t  Element Index 0 : %d", iArray3[ 0 ] );
	printf( "\n\t  Element Index 1 : %d", iArray3[ 1 ] );
	printf( "\n\t  Element Index 2 : %d", iArray3[ 2 ] );
	printf( "\n\t  Element Index 3 : %d", iArray3[ 3 ] );
	printf( "\n\t  Element Index 4 : %d", iArray3[ 4 ] );
	printf( "\n\n\tThe specified digit : 7" );
	printf( "\n\n\tThere are %d occurences of digit 7 in the given values.", value );


	printf( "\n\n\nFourth call to extractDigitOccurenceCharlesStuart() --" );
	value = extractDigitOccurenceCharlesStuart( 5, iArray4, 6 );
	printf( "\n\n\tCurrent array information and values: ");
	printf( "\n\t  Size\t : 6" );
	printf( "\n\t  Element Index 0 : %d", iArray4[ 0 ] );
	printf( "\n\t  Element Index 1 : %d", iArray4[ 1 ] );
	printf( "\n\t  Element Index 2 : %d", iArray4[ 2 ] );
	printf( "\n\t  Element Index 3 : %d", iArray4[ 3 ] );
	printf( "\n\t  Element Index 4 : %d", iArray4[ 4 ] );
	printf( "\n\t  Element Index 5 : %d", iArray4[ 5 ] );
	printf( "\n\n\tThe specified digit : 5" );
	printf( "\n\n\tThere are %d occurences of digit 5 in the given values.", value );
	
	scanf( "%d", &a );

	return 0;
}


int extractDigitOccurenceCharlesStuart( int arg, int iReceivedArray[], int iSize ){
	int temp;
	int dividedVariable;
	int val;
	int iCountingArray[ 10 ] = { 0 };


	for ( temp = 0; temp <= ( iSize -1 ); temp++ ){

		dividedVariable = iReceivedArray[ temp ];

		do {
			if ( dividedVariable < 0 ) {
				dividedVariable = ( dividedVariable * -1 );
			}
			val = dividedVariable % 10;
			dividedVariable = dividedVariable / 10;
			iCountingArray[ val ]++;
					}
		while ( dividedVariable != 0 );
	}

	return iCountingArray[ arg ];
}