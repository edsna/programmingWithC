#include <stdio.h>
void main(){
int num;
int k = 80;            
int *nump;
num = 65;
nump = & num;
int j;
int z;
int w;
float *fp; //creates a null pointer
*(&w) = 500; //turns w into a pointer storing 500
//j = *(&nump) = 500; //sets j to the address of nump-which is in turn the address of num
z = *(nump); //sets the value of z to the value stored in nump
printf("What nump is pointing to: %d\n", *nump); //prints the value stored in address of nump(65)
printf("The address stored in nump: %p\n", nump); //prints the address where nump is located
printf("The value of K is: %d\n", k); //prints the value stored in address of nump(80)
printf("The address of K is: %d\n", &k); //prints the address of K
printf("The address of num is: %d\n", w); //prints the address of j/num
printf("The address of num is: %d\n", z); //prints the address of j/num
printf("Prints a NULL pointer: %f\n", fp);  	

//POINTER ASSIGNMENT
int x = 100;
int num2 = 200;
int *myPointer = &x;
int *myPointer2;
myPointer2 = &num2;
myPointer =myPointer2; //Assigns them both to the same value the pointer is pointing to.
printf("Value of my pointer is: %d\n", *myPointer);  
printf("Value of my pointer is: %d\n", *myPointer2);

/*
//MORE PRACTICE
int num1 = 10;
int *ip = &num1;
printf(“ Value of pointer is: %d\n”, ip);
*ip = 7; //overwrites value of pointer
*ip= *ip+ 3; //overwrites value of pointer again
printf(“New value of pointer is: %d\n”, *ip);
printf(“Value of num1 is: %d\n”, num1);
*/
}