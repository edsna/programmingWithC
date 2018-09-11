/*
 *C Workshop
 *Edson Zandamela
 */
 
 #include <stdio.h>
 
 /*
 *This program prompts a user to enter 3 integers and determines the maximum value of the three
 */ 
  
 int myFunction( int num1, int num2, int num3){
        int higher;
        if(num1>num2 && num1>num3){
                higher=num1;
                }
        else if(num2>num1 && num2>num3){
                higher=num2;
                }
        else if(num3>num1 && num3>num2){
                higher=num3;
                }
       return higher;
       }

 void main(){
 int num1;
 int num2;
 int num3;
        printf("Enter three integers separated by space:\n");//Prompts user for three numbers % assigns them to the function
        
        scanf("%d%d%d", &num1, &num2, &num3);//Assigns the three inputs to the variables
        
        printf("The higher number is: %d", myFunction(num1, num2, num3));
}


