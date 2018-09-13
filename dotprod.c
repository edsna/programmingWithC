/*
 *Intro to C
 *Edson Zandamela
 */

 #include <stdio.h>

 /*
 *This program prompts a user for a vector's size, the elements of two vectors, and then computes the dot product of the two.
 */

#define SIZE 100 //Max size a vector can reach

  //Function that Computes dot product of the two vectors
 float dotF( float size, float vector1[], float vector2[]){
                float result=0; //stores the product of the vectors
                int i; //index position inside the array/vector
                        for(i=0; i< size; i++){
                                result += vector1[i] * vector2[i]; //dot product operation
                        }
                return result; //dot-product result
       }

 void main(){

 int size; //user's desired vector size
 float vector1[SIZE]; //creates vector 1
 float vector2[SIZE]; //creates vector 1
 int k; //stores index position of first vector
 int j; //stores index position of second vector
 int i; //stores index position of each/all vectors

        printf("Enter the size of the vector:\n"); //prompts for the size of vector

        scanf("%d", &size); //Assigns input to size of vector

        printf("Enter the elements of the first vector followed by space:\n"); //Prompts for the elements of the first vector
        for(k=0; k < size; k++){
        printf("enter index position %d: ", k); //prompts for index position
        scanf("%f", &vector1[k]); //assigns index element to vector position
        printf("\n");
        }

        printf("Enter the elements of the second array followed by space:\n"); //Prompts for the elements of the second vector
        for(j=0; j < size; j++){
        printf("enter index position %d: ", j); //prompts for index position
        scanf("%f", &vector2[j]); //assigns index element to vector position
        }
        printf("The siz %d\n", size);

        //Prints the two vectors
        for(i=0; i<size; i++){
                       printf("v1[%d] %f\n",i, vector1[i]);
                       printf("v2[%d] %f\n",i, vector2[i]);
        }
        printf("The product of your vectors is: %f", dotF(size, vector1, vector2));
}


