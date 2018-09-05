/*
 *First Program
 *Edson Zandamela CS275
 */
 
 #include <stdio.h>
 
 /*
 *This program generates a table that converts a set of given symbolic constants from degrees Celsius to Farenheit
 */
 
 #define UPPER 40
 #define STEP 5
 #define LOWER -10
 
 void main(){
 
float k;
printf("Celsius\t\tFarenheit\n");
for(k=LOWER; k<UPPER; k+=STEP){
        printf("%2.1f\t\t%2.1f\n", k, ((9.0/5.0*k)+32));
        }
}
