<<<<<<< HEAD
#include "main.h"
=======
include "main.h"
>>>>>>> b5c42b3d3f8dbeb44fb4c51f7dcb8b7d45b28448

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int alphabet;
int count;


count = 0;
while (count < 10)
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

count++;
_putchar('\n');
}


}
