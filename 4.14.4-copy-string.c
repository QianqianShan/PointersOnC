#include <stdio.h>
#include <stdlib.h>



/* copy exact n characters*/
void copy_n( char dst[], char src[], int n)
{

    int loc_d, loc_s = 0;
    for (loc_d = 0; loc_d < n; loc_d++)
    {

        dst[loc_d] = src[loc_s];
        /* only move the loc_s forward when it's not NULL*/
        if(src[loc_s] != 0)
        {
            loc_s +=1;
        }
    }


}
void main()
{
    char dst[30];
    char src[20] = "This is a test";
    copy_n(dst, src, 3);
    printf("New dst with 3 characters is %s .\n", dst);

    copy_n(dst, src, 15);
    printf("New dst with 15 characters is %s .\n", dst);


    copy_n(dst, src, 20);
    printf("New dst with 20 characters is %s .\n", dst);



}
