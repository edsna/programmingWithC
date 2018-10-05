#include <stdio.h>
#include <bits/stdc++.h>  
  
int main() 
{ 
    int x; 
	x = 20;
	int val[3] = { 5, 10, 20 }; //int array
	int *ptr;//DECLARE POINT
	ptr = val;//ASSIGN POINT TO ARRAY NAME
	int *point; //stores address of int variable
	point = &x; //stores address of x
	*point = *(&x); //stores value of x correclty
	*point = 40; //changes the value hosted by pointer
    // Prints address of x 
    printf("Address of x is: %d\n", &x); 
	printf("Value of x is: %d\n", x);
	printf("Address of x by pointer is: %d\n", *point);//may change due to updates up top
	cout << "Elements of the array are: "; 
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2]; 
	
	}