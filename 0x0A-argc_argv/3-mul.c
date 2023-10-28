#include <stdio.h>
#include <stdlib.h>

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    /* Check for a leading '+' or '-' sign */
    if (s[0] == '-') {
        sign = -1;
        i = 1;
    } else if (s[0] == '+') {
        i = 1;
    }

    /* Iterate through the string and convert to an integer */
    while (s[i] != '\0') {
        if (s[i] >= '0' && s[i] <= '9') {
            result = result * 10 + (s[i] - '0');
        } else {
            /* Handle non-digit characters here, if needed */
            /* For now, we'll assume the input is a valid integer. */
        }
        i++;
    }

    return result * sign;
}

int main(int argc, char *argv[])
{
    int a, b;

    if (argc != 3)
    {
        printf("Usage: %s arg1 arg2\n", argv[0]);
        return 1;
    }

    a = _atoi(argv[1]);
    b = _atoi(argv[2]);
    printf("%d\n", a * b);
    return 0;
}
