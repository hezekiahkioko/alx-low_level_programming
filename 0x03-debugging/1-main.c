#include <stdio.h>

/**
 * main - This is the main function.
 * It prints a message and then comments out a loop that would cause an infinite loop.
 *
 * Return: Always returns 0 to indicate successful execution.
 */
int main(void)
{
    int i;
    printf("Infinite loop incoming :(\n");
    i = 0;
    
    // This is a commented-out while loop
    // While loop would cause an infinite loop, so it's avoided.
    /*
    while (i < 10)
    {
        putchar(i);
    }
    */
    
    printf("Infinite loop avoided! \\o/\n");
    return (0);
}
