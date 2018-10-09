#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ch;
    while((ch=getchar())!=EOF)
    {
        printf("%d %c\n",ch,ch);
    }
//		    system("pause");
    return 0;

}
