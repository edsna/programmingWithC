/*
 *CS275 Project 1
 *Edson Zandamela October 5th 2018
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 /*
 *This program reads the word list from a file, sorts them according to the
 *from easyest to hardest to pronounce, and outputs the sorted list in increasing order of
 *difficulty to pronounce.
 */ 

#define maxWords  1000          //Max number of words
#define invGodenRatio 0.618     //Golden Ratio
#define  maxSize  25            //Maximum number of words

/*
 *Returns 1 if c is a vowel and 0 otherwise
*/
int isVolwel(char c);

/*
 *Returns the average word evaluation/function to vowel or consonant
*/
double getConstantFraction(char word[maxWords]);

/*
 *Returns -1 if cfx < cfy
 *Returns 1 if cfx > cfy
 *Returns 0 otherwise
*/
int compare(char x[maxSize], char y[maxSize]);

/*
 *Sorts words in the file according to the score system
*/
void sort(char A[maxWords][maxSize], int n);

//Main
void main() {

    char strs[maxWords][maxSize];       //My Array
    int numWords=0;                    //Keeps track of number of words in the file
        int i = 0;                      //Keeps track of each word
        int a = 0;                      //Keeps track of letters
        char c = getchar();             //Gets charadters/words in file
        while(c != EOF){                //While not in the end of file
           if(c == '\n'){               //while not in newline
                numWords++;            //updates number of words
                i++;                    //update i 
                a = 0;                  //Reset a
                c = getchar();          //upload words
                continue; 
           }  
           strs[i][a] = c;              //uploads letters
           c = getchar();               //update c
           a++;                         //update a
        }
        
        printf("List contains %d words \n", numWords);
        printf("After sorting the words we have:\n"); 

    sort(strs,numWords);                //Sorts the words
}

/*
 *Returns 1 if c is a vowel and 0 otherwise
*/
int isVolwel(char c) {
    if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y'){
        return 1;
    }
    return 0;
}

/*
 *Returns the average word evaluation/function to vowel or consonant
*/
double getConstantFraction(char word[maxWords]){
    int i = 0;
    int constant = 0;
    int vowel = 0;
    while(word[i] != '\0'){
        if(isVolwel(word[i])){
            vowel++;
        }
        else{
            constant++;
        }
        i++;
    }
    return (double)constant/(vowel+constant);
}

/*
 *Returns -1 if cfx < cfy
 *Returns 1 if cfx > cfy
 *Returns 0 otherwise
*/
int compare(char x[maxSize], char y[maxSize]){
    double cfx = getConstantFraction(x);
    double cfy = getConstantFraction(y);
    double cfxdiff = cfx - invGodenRatio;
    double cfydiff = cfy - invGodenRatio;
    //Takes absolute value 
    if(cfxdiff<0){
        cfxdiff = -cfxdiff;
    }
    //Takes absolute value
    if(cfydiff<0){
        cfydiff = -cfydiff;
    }
    if(cfxdiff<cfydiff){
        return -1;
    }
    else if(cfxdiff > cfydiff){
        return 1;
    }
    else{
        return 0;
    }
}

/*
 *Sorts words in the file according to the score system
*/
void sort(char A[maxWords][maxSize], int n){
    char key[maxSize];
    int j=1;
    int i=0;
    for(j=1;j<n;j++){  
        strcpy(key,A[j]);
        int i=j-1;
        while (i>=0 && compare(A[i],key)==1){
            strcpy(A[i+1],A[i]);
            i--;
            strcpy(A[i+1],key);
        }
    }
    for(i=0;i<n;i++){
        printf("%s\n",A[i]);
    }
}


