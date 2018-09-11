/*
 *C Workshop
 *Edson Zandamela
 */
 
 #include <stdio.h>
 
 /*
 *This program generates a table that converts a set of given symbolic constants from degrees Celsius to Farenheit using a while loop
 */
 
 #define UPPER 40
 #define STEP 5
 #define LOWER -10
 
 void main(){
 
float k = LOWER;
        printf("Celsius\t\tFarenheit\n");
while(k<=UPPER){
        printf("%2.1f\t\t%2.1f\n", k, ((9.0/5.0*k)+32));
        k+=STEP;
        }        
}


