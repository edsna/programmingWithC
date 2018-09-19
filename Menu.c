/*
 *Edson Zandamela CS275
 */
 
 #include <stdio.h>
 
 /*
 *This program adds a Menu to so a user can select different programs
 */
 //Function 1
 
#define UPPER 40
#define STEP 5
#define LOWER -10
 
 int function1( int num1, int num2, int num3){
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

//Function2
 float function2( int j){
        float temp=((9.0/5.0*j)+32);
        return temp;
}
 
 void main(){
	int z = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	float k = LOWER;
 
	printf("Menu:\n");
	printf("Enter 1 for Higher number program and 2 for temperature program: "); 
	scanf("%d", &z);  
	switch(z){
		case 1:
		printf("Enter three integers separated by space:\n");//Prompts user for three numbers % assigns them to the function
        
        scanf("%d%d%d", &num1, &num2, &num3);//Assigns the three inputs to the variables
        
		printf("The higher number is: %d", function1(num1, num2, num3));
		break;
		case 2:
		printf("Celsius\t\tFarenheit\n");
        do{
                printf("%2.1f\t\t%2.1f\n", k, function2(k));
                k+=STEP;
                }
                while(k<=UPPER);    
	}

}