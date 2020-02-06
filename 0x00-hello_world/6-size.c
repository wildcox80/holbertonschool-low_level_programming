#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
<<<<<<< HEAD
char 
printf("Size of a char: %i\n", sizeof(char));
printf("Size of a int: %i\n", sizeof(int));
printf("Size of a long int: %i\n", sizeof(long int));
printf("Size of a float: %i\n", sizeof(float));
printf("Size of a  double: %i\n", sizeof(double));
=======
char charVar;
int intVar;
long int lintVar;
long long int llintVar;
float floatVar;
printf("Size of a char: %ld byte(s)\n", sizeof(charVar));
printf("Size of an int: %ld byte(s)\n", sizeof(intVar));
printf("Size of a long int: %ld byte(s)\n", sizeof(lintVar));
printf("Size of a long long int: %ld byte(s)\n", sizeof(llintVar));
printf("Size of a float: %ld byte(s)\n", sizeof(floatVar));
>>>>>>> f3435780b90534628eee3e0eb5f3d14d04e0cc81
return (0);
}
