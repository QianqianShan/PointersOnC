#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, count;
    count = 0;
    for (i = 1; i <= 100; i++)
    {

        for (j = 2; j < i; j ++)
        {
            if (i % j == 0)
            {
                /* if i can be divided by any number smaller than itself, it's not prime number,
                  flag  count to be non zero*/
                count += 1;
                break;
            }
        }
        if (count == 0)
        {
            printf("Prime number: %d \n", i);
        }

        /* reset count value to be zero */
        count = 0;
    }
}
