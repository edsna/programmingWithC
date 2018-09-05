/*
 *Edson Zandamela CS275
 */
 
 #include <stdio.h>
 
 /*
 *This program prompts a user for a temperature in degrees Farenheit then prints the result in degrees Celsius with 3 decimal points
 */
 
 void main(){

 float far;//Variable will host temperature in Farenheit
        
        printf("Enter temperature in degrees Farenheit:\n");//Prompts user for degrees in Farenheit
        
        scanf("%f", &far);//Assigns Farenheit input to float variable
        
        printf("%.0f degrees Farenheit is equivalent to %.0f degrees Celsius.", far, ((5.0/9.0)*(far-32))); //Prints result with no decimal points 
 
 }
