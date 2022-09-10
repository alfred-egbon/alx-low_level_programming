#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int d;

        for (d = 0; d < 100; d++)
        {
                putchar((d / 10) + '0');

                                putchar((d % 10) + '0');

                                if (d != 89)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
        }
        putchar('\n');

        return (0);
}

