#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_COL 20
#define MAX_INPUT 10


void rearrange( char *output, char const *input, int n_columns, int const columns[]) {
int col;   /* subscript of columns */
int output_col; /*subscript of the current output column*/
int len;

len = strlen(input);
output_col = 0; /*initialize the output_col*/

for (col = 0; col < n_columns; col += 2) {
    int nchars = columns[col + 1] - columns[col] + 1;

    /* stop if input is done or the columns[] is full */
    if (columns[col] >= len) continue;

    if(output_col == MAX_INPUT - 1) break;

    /* if columns[] space is not enough, only copy the first few , update nchars*/
    if ( (output_col + nchars) > MAX_INPUT -1 ) nchars = MAX_INPUT - output_col -1;

    /*copy the characters */
    strncpy(output + output_col, input + columns[col], nchars);
    output_col += nchars;
}

output[output_col] = '\n';  /*end the output with NUL*/
 }



void main(){
int n_columns = 4;
int colums[4] = {6, 50, 1, 4};
char input[] = "Thisisatestsentence";
char output[100];
printf("Original input : %s \n", input);
rearrange(output, input, n_columns, colums);
printf("Output: %s \n", output);
}


