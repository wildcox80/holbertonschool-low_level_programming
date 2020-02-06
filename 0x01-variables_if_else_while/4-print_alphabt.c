#include <stdio.h>
/**
* main - Entry point
* Description: print alphabet except e and q letters
* Return: Always 0 (Success)
*/

int main(void)
{
char alph = 'a';
while (alph <= 'z')
{
putchar(alph);
alph++;
}
if (alph == 'e' || alph == 'q')
{
alph;
}
putchar('\n');
return (0);
}
