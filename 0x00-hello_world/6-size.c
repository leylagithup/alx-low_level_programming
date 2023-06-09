#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %u byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %u byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %u byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %u byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %u byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
