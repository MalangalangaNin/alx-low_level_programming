#include "holberton.h"

/**
 *main - chec the code 
 *
 *Return always zero 
 */
int main (void)
{
 int i ;
 char c ;

for (i=0; i<10; ++i;)
{
for (c='a' ; c<='z' ; c++ )
{
_putchar(c);
}
_putchar('\n');
}
return (0);
}
