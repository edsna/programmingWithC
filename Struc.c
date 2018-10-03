/*
 *Structures in C
 *Edson Zandamela 
 */
 
#include<stdio.h>
#include<string.h>
//Next declares a structure with a name Profile

struct Profile
{
    char name[26]; //Member variable
    int age; //Member variable
    char gender; //Member variable
	int yearsExperience;
	float salary;
	int x, y;
}Position, testStruc; //Variable of the Structure Profile

int main()
{
	//struct Profile profl;
	//one way of initializing structure members
    struct Profile profl; //Assigns to yearsExperience & salary
    profl.age = 101; //member of Profile initialization
    
	strcpy(profl.name, "Edson"); //Adds/initializes name to name
	profl.yearsExperience = 10;	
	profl.salary = 150.000;	
    printf("Name of candidate is: %s\n", profl.name);
    printf("Age of candidate is: %d\n", profl.age);
	printf("Years of Experience are: %d\n", profl.yearsExperience);
	printf("Desired salary is: %f\n", profl.salary); 
	
	// Creates an array of structures 
   struct Profile myArray[10]; 
  
   // Access array members 
   myArray[0].x = 10; 
   myArray[0].y = 20; 
  
   printf("My Array has: %d %d", myArray[0].x, myArray[0].y); 

   //Pointers in structures
   struct Profile testStruc = {1, 2}; 
  
   // p2 is a pointer to structure p1 
   struct Profile *p2 = &testStruc; 
  
   // Accessing structure members using structure pointer 
   printf("My structure pointers work: %d %d", p2->x, p2->y);
}
