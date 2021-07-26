#include <stdio.h>

int main() {


int body[] = {10, 20, 30, 40};
int *bodyPtr = body; // here I tell the comnputer, that everytime I say body
                    // I mean the adredss of the array in thr memory.
int i;
int offset; // these are conters

printf(" Array b printed with the subscript notation\n" );


for( i=0; i < 4; i++ )
{
  printf( "body[%d] =%d\n ", i, body[ i ] );
}/* end for */

/* print on screen array body using array name and pointer/offset notation*/
printf(" \nPointer/offset notation where\n"
      "the pointer is the array name\n" );

  /* loop through array body*/
  for(offset = 0; offset < 4; offset++ ){
    printf("*(body + %d) = \n", offset, *( body + offset ) );
  } /*emd for loop*/

  printf(" \nPointer subscript notation\n" );

  for ( i = 0; i < 4; i++){
    printf( "bodyPtr[ %d ] = %d\n", i, bodyPtr[ i ] );
  }

 /* print on screen array body using bodyPtr and pointer/ offset*/
 printf( "\nPointer/offset notation\n " );

 for (offset =0; offset < 4; offset++)
 {
   printf( " *(bodyPtr + %d ) = %d\n", offset, *(bodyPtr + offset ) );
 }

   return 0;
}
