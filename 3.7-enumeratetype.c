/* cannot print out jar with format %s */


#include <stdio.h>

void main(){
enum liquid {once =1, cup = 8, pint = 16, quart = 32, gallon = 128};
enum liquid jar;
jar = quart;
printf("jar in int: %d\n", jar);
//printf("jar in character: %s \n", jar);
jar = jar + pint;
printf("jar in int: %d\n", jar);
//printf("jar in character: %s \n", jar);
}
