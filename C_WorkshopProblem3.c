/*
 *C Workshop
 *Edson Zandamela
 */
 
 #include <stdio.h>
 
 /*
 *This program generates a table that converts a set of given symbolic constants from degrees Celsius to Farenheit using a function
 */
 
 #define UPPER 40
 #define STEP 5
 #define LOWER -10
 
 float myFunction( int j){
        float temp=((9.0/5.0*j)+32);
        return temp;
        }

 void main(){
        float k = LOWER;
        printf("Celsius\t\tFarenheit\n");
        do{
                printf("%2.1f\t\t%2.1f\n", k, myFunction(k));
                k+=STEP;
                }
                while(k<=UPPER);      
}


