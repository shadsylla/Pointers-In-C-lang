#include <stdio.h>

void copy1( char *s1, const  char *s2 ); /* prototype*/
void copy2(char *s1,  const char *s2 );

int main()
{
  char *letter [ 10 ];
  char *string2 = " Hey "; // this creates a pointer to th string
  char string3  [ 10 ];  // create array string 3
  char string4[] = "Welcome to BMI"; // this cretes a pointer to the string

  copy1 ( letter, string2 );
  printf( "letter =%s\n", letter );

  copy2 ( string3, string4 );
  printf(" string3 = %s\n", string3 );

  return 0;

}

void copy1( char *s1, const char *s2 )
{
  int i;

  for ( i = 0; (s1[ i ] = s2[ i ]) != '\0'; i++)
  {
    ; // do nothing
  }

}/* end of function copy */

/* copy s2 to s1 using pointer notation */
void copy2( char *s1, const char *s2 )
{
  for ( ; ( *s1 = *s2 )  != '\0'; s1++, s2++ )
  {
    ; // do not dop a thing
  }// end for loop

}/* end function copy2 */
