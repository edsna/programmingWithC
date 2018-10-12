/*
 *Edson Zandamela CS275
 */
 
 #include <stdio.h>
 
 /*
 * This program lists the sizes, in bytes, of each of the following: int, long int, float, double, short, char. 
 * You will need to specify the output format as a long unsigned integer.
 */
 
 void main(){
        
        printf("Integer: %d\n", sizeof(int));
        printf("Long Integer: %llu\n", sizeof(long int));
        printf("Float: %f\n", sizeof(float));
        printf("double: %lf\n", sizeof(double));
        printf("Short: %hd\n", sizeof(short));
        printf("Char: %c\n", sizeof(char));
        printf("...\n");
 
 }
