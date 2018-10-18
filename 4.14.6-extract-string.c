/* Extract sub-string from src to dst */

#include <stdio.h>
#include <stdlib.h>

int substr(char dst[], char src[], int start, int len) {
 int i;
 for ( i = start; (i < (start + len) & src[i] != '\0'); i ++) {
                /* copy when src[i] is not NULL */
            dst[i - start] = src[i];
        }
dst[i - start] = '\0';
return(i-start);
}


void main() {
char dst1[100];
char dst2[100];
char src1[60] = "This is a very long sentence for the testing purpose.";
char src2[60] = "This is test.";
int l1, l2;
l1 = substr(dst1, src1, 10, 300);
printf("dst1 is \"%s\"with length %d. \n", dst1, l1);

l2 =substr(dst2, src2, 5, 40);
printf("dst2 is \"%s\" with length %d. \n", dst2, l2);
}
