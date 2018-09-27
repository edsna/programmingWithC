/*
 *Edson Zandamela CS275
 */
 
 #include <stdio.h>
  //defines the limit size of array to 100
  #define SIZE 100
 /*
 *This program computes the dot product of two vectors using pointers to traverse the vectors
 */
 
/* 
 *reads file of the form illustrated below, returning the size of the vectors.
 *also test that the size of the array is in bounds, and return -1 if it is not.
*/
 int getinput(float a[], float b[]){
                int *aPointer;
                int *bPointer;
                int limita;//size of a
                int limitb;//size of b
                int track;
                 int k;
                 int j;
                //reads size
                printf("Enter the size of the array:\n");       
                scanf("%d", &limita);
                
                printf("Enter the elements of the first array:\n");
                for(k=0; k < limita; k++){
                printf("Enter the index of element %d: ", k);
                scanf("%f", &a[k]);
                printf("\n");
                }
                
                printf("Enter the elements of the second array f:\n");
                for(j=0; j < limita; j++){
                printf("Enter the index of element %d: ", j);
                scanf("%f", &b[j]);      
                }
                
                //testing if its in bounds
                if(a[limita] > 100 || b[limitb] > 100){
                        return -1;
                   }
                   
                for(aPointer = &a[0]; aPointer < &a[limita]; aPointer++){
                                        track +=1;
                                        return track;
                               } 

                               for(bPointer = &b[0]; bPointer < &b[limitb]; bPointer++){
                                        track +=1;
                                        return track;
                               } 

 }
 
 /* 
 *compute and return the dot product of vectors a and b
 *
*/

 float dotproduct(int size, float a[], float b[]){
                float answer=0;
                float element=0;
                int *pointer = &a[0]; //creates a pointer and sets it to index 0 of array
                int i;
                        for(i=0; i< size; i++){
                                answer += a[i] * b[i];
                                pointer++;
                        }
                return answer;
 }
 
 
 void main(){
 float size =0; //positive integer
 float a[SIZE]; // v1
 float b[SIZE]; // v2
 int k;
 int j;
 int i;
 int track;
 
        //printf("size of array is: %d", track);
        size = getinput(a, b);
        printf("Testing size %d\n",size);
        
        //PRINTS THE ARRAYS
        for(i=0; i<size; i++){
                       printf("array a[%d] %f\n",i, *(a+i));
                       printf("array b[%d] %f\n",i, *(b+i));
        }
        
        printf("The product of your vectors is: %f", dotproduct(size, a, b));
        
        
 }
 
 
 
 
 
 
 // Delete htis after testing
 //size, 
 //a[i]

//SECOOND FUNCTION

