#include <stdio.h>
#include <stdlib.h>

/* requires input n */
int main()
{
    int n;

    double a1, a2, temp;
    int count;
    scanf("%d", &n);
    if (n < 0) {

        printf("A non-negative number is expected. \n");
        return EXIT_FAILURE;
    }
    printf("Compute the square root of %d \n", n);

    a2 = 1;
    count = 0;

    while ( ((a2 - a1) > 0.000001) || ((a2 - a1) < -0.000001) )
    {
        temp = a2;
        a2 = (a2 + n / a2) / 2;
        count += 1;
        a1 = temp;
    }

    printf("Square root of %d is %f and computed by %d iterations. \n", n, a2, count);
    return EXIT_SUCCESS;
}
