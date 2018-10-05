#include <stdio.h>
#include <bits/stdc++.h>  
  
int main() 
{ 
    int a = 4;
    int b = 5;	
	int *pt;//DECLARE POINT
	int *ptr;//DECLARE POINT
	*pt = (&a);
	*ptr = (&b);
    printf("a *b is: %d\n", *pt = *pt * *ptr);
	}