/* Use ctrl + D to stop in the input of getchar()*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    int num;

    /*initialize num */
    num = 0;
    while ( (ch = getchar()) != EOF)
    {
    printf("Character %c : interger  %d\n", ch, ch);
        /*add one to num when first find the left brace */
        if ( ch == '{')
        {
            num +=1;
        }

        if (ch == '}')
        {
            if (num == 0)
            {
                /*If there is an extra right brace */
                printf("Extra right brace");
            }
            else
            {
                num -= 1;
            }
        }
    }

    /* check how many unmatched braces */
    if (num > 0) printf("%d unmatched braces \n", num);
    return EXIT_SUCCESS;

}
