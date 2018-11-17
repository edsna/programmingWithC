/*
 *Edson Zandamela 
 */
 
 //Sign Flag has to be set for addition & subtraction too
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MaxActionInputSize 10
#define MaxStorArrSiz 15
#define MaxRegArrSiz 15
#define MaxElemInp 4
#define MaxMmLocSiz 15
#define MaxdataInp 10
 /*
 *This program prompts a user for 
 */
 
 int ignorCommer(int t);
 char ignorComme(char T);
 
void main(){  
        //Fields
        char MainAction[MaxActionInputSize];	//Max input for READ/WRITE/PRINTS
        char action[MaxActionInputSize];	//Stores input READ/WRITE/PRINTS
        char data;	//Data
        char MemLoc[MaxElemInp];	//MemLocation
	int StorArr[MaxStorArrSiz]= {'?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', 0, 0, 0,};		//Storage Array
	int TempMove[MaxStorArrSiz];
	char MemoryLocArr[MaxMmLocSiz][MaxElemInp] = {"R0", "R1", "R2", "R3", "M0", "M1","M2", "M3", "M4", "M5", "M6", "M7", "ZF", "SF", "OF"};	//Memory Locations
	int i = 0;
        
        FILE *myFile;
    		myFile =fopen("input.txt", "r");
                char limitLines[10000];
                //Trying commer input
                const char s[2] = ",";
                char *token; //= myFile
                int x;
                
        if(myFile != NULL){
	//Beggining of interactivity          //Gets charadters/words in file
	 while(fgets(limitLines, sizeof limitLines, myFile) != NULL){
		 int n = 20;
		 char testIn[n];
			scanf("%s", action); //store input in data
				/*while( action == 0) {
					  printf("Error!! Wrong number of arguments please try again.\n");
					 continue;
				 }
				 scanf("%s", action); //store input in data
				 */	        
	        if(strcasecmp(action, "READ") == 0){
				
			fscanf(myFile, "%s %s %s", action, testIn, MemLoc); //store input in data
			int Max = 20;
			char temp[n];
			temp[n] = testIn[n];
			//printf("temp is: %s\n", temp);//Tests what is stored in temp
			int com = strlen(testIn)-1;
			testIn[com] = 'O';
			data = atoi(testIn);
	        //Check for Commer>>LAST TRIAL
	        /*
	        token = strtok(&data, s);
	          while( token != NULL ) {
                      printf( "testando:  %s\n", token );
                        
                      token = strtok(NULL, s);
                   }
	       
	        for(x=0;x<2;x++){
                        if(x==0){   
                            //printf("test is: %s\t\n",token);
                            token = strtok(&data,s);
                        } else {
                            //printf("test 000 is: %d\n",atoi(token));
                        }       
              }*/
	//printf("action has: %s\n", action);
	//printf("testIn has: %s\n", &testIn);
	//printf("Temp has: %s\n", &temp);
	
	//Suppress Comma>>LAST TRIAL	
	/*
	
	int ii = 0;
            for(ii = 0; ii < 20; ii++){
                 if(ii > 0)
                 data[ii - 1] = '\0';
            }
            printf("Extra Variable is: %s\n", &data);
  */          
	//printf("data now have: %s\n", &data);
	//printf("MemLoc has: %s\n", MemLoc);
			//Check input correctness
                        char empty[MaxElemInp] = {'\0'};
                        char null[MaxElemInp];	
				/*if(data == 0 || ( strcmp(MemLoc,empty)==0)) {
					  printf("Error!! Wrong number of arguments please try again.\n");
					 continue;
				 }	*/
				//Puts data into StorArr and 
				for(i = 0; i < MaxRegArrSiz; i++){
					if(strcasecmp(MemLoc, MemoryLocArr[i]) == 0){	//if Mk == MemLocinput
						StorArr[i] = data;
				 		}
				    } 			
		}else if (strcasecmp(action, "WRITE") == 0){
				scanf(" %s", MemLoc); //store input in data
		        	for(i = 0; i < MaxRegArrSiz; i++){
					if(strcasecmp(MemLoc, MemoryLocArr[i]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[i], StorArr[i]);
					}
				}
	        }else if (strcasecmp(action, "PRINTS") == 0){
		        for(i = 0; i < MaxStorArrSiz; i++)
		        	printf(StorArr[i] == '?' ? "?\t":"0x%x\t", StorArr[i]);	//Print Storage Array
		        	//printf(Edson Zandmela", StorArr[i]);	//Print Storage Array

				printf("\n"); 	//New line
				for(i = 0; i < MaxRegArrSiz; i++)
		  			printf("--\t");		//Print broken line

				printf("\n"); 			//New line
				for(i = 0; i < MaxRegArrSiz; i++)
					printf("%s\t", MemoryLocArr[i]);	//Print MemLocation Array
					printf("\n");
					 	
	        }else if (strcasecmp(action, "MOVE") == 0){
				char SecLoc[MaxElemInp];
				char first[10];	//defines Edson Zandamela of MOVE
				int j = 0;
				int k = 0;
				int z = 0;
				scanf(" %s %s", first, SecLoc); //store input in data
				printf("First Argument of first has: %c \n", first[0]);
				printf("Second Arg of second has: %c \n", SecLoc[0]);
				//Check Correctness
		                if((first[0]=='m'||first[0]=='M') && (SecLoc[0]=='m'||SecLoc[0]=='M')){
					printf("Error!! You cannot move between two memory locations \n");
					continue;
				}
				for(j = 0; j < MaxRegArrSiz; j++){ 
					if(strcasecmp(first, MemoryLocArr[j]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[j], StorArr[j]);
						break;
						}	
					}
				for(k = 0; k < MaxRegArrSiz; k++){
				        
					if(strcasecmp(SecLoc, MemoryLocArr[k]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[k], StorArr[k]);
						break;
						}			
				}
				StorArr[k] = StorArr[j];
	        	}else if (strcasecmp(action, "ADD") == 0){
	        		
				char firstAdd[MaxElemInp];
				char SecondAdd[MaxElemInp];	//defineEdson ZAndamelas dest of MOVE
				int a = 0;
				int d = 0;
				scanf(" %s %s", firstAdd, SecondAdd); //store input in data
				//Check Correctness
		                if((firstAdd[0]=='m'||firstAdd[0]=='M') && (SecondAdd[0]=='m'||SecondAdd[0]=='M')){
					printf("Error!! You cannot add values of two memory locations! \n");
					continue;
				}
				for(a = 0; a < MaxRegArrSiz; a++){ 
					if(strcasecmp(firstAdd, MemoryLocArr[a]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[a], StorArr[a]);
						break;
						}	
					}
				for(d = 0; d < MaxRegArrSiz; d++){   
					if(strcasecmp(SecondAdd, MemoryLocArr[d]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[d], StorArr[d]);
						break;
						}			
				}
				StorArr[0] = StorArr[d] + StorArr[a];
				if(StorArr[a] > StorArr[d]){
					StorArr[12] = 0;
					StorArr[13] = 1;
					printf("%d > %d therefore ZF = %d and SF = %d \n", StorArr[a], StorArr[d], StorArr[12], StorArr[13]);
				}else if(StorArr[a] < StorArr[d]){
					StorArr[12] = 0;
					StorArr[13] = 0;
					printf("%d < %d therefore ZF = %d and SF = %d \n", StorArr[a], StorArr[d], StorArr[12], StorArr[13]);
				}else if(StorArr[a] == StorArr[d]){
					StorArr[12] = 1;
					StorArr[13] = 0;
					printf("%d = %d therefore ZF = %d and SF = %d \n", StorArr[a], StorArr[d], StorArr[12], StorArr[13]);
				}
				printf(" %d + %d = %d \n", StorArr[d], StorArr[a], StorArr[0]);
	        	}else if (strcasecmp(action, "MULT") == 0){
	        		
				char firstMult[MaxElemInp];
				char SecondMult[MaxElemInp];	//defines dest of MOVE
				int m = 0;
				int l = 0;
				scanf(" %s %s", firstMult, SecondMult); //store input Edson ZAndamela in data
				//Check Correctness
		                if((firstMult[0]=='m'||firstMult[0]=='M') && (SecondMult[0]=='m'||SecondMult[0]=='M')){
					printf("Error!! You cannot multiply values of two memory locations! \n");
					continue;
				}
				for(m = 0; m < MaxRegArrSiz; m++){ 
					if(strcasecmp(firstMult, MemoryLocArr[m]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[m], StorArr[m]);
						break;
						}	
					}
				for(l = 0; l < MaxRegArrSiz; l++){   
					if(strcasecmp(SecondMult, MemoryLocArr[l]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[l], StorArr[l]);
						break;
						}			
				}
				StorArr[0] = StorArr[l] * StorArr[m];
				if(StorArr[m] > StorArr[l]){
					StorArr[12] = 0;
					StorArr[13] = 1;
					printf("%d > %d therefore ZF = %d and SF = %d \n", StorArr[m], StorArr[l], StorArr[12], StorArr[13]);
				}else if(StorArr[m] < StorArr[l]){
					StorArr[12] = 0;
					StorArr[13] = 0;
					printf("%d < %d therefore ZF = %d and SF = %d \n", StorArr[m], StorArr[l], StorArr[12], StorArr[13]);
				}else if(StorArr[m] == StorArr[l]){
					StorArr[12] = 1;
					StorArr[13] = 0;
					printf("%d = %d therefore ZF = %d and SF = %d \n", StorArr[m], StorArr[l], StorArr[12], StorArr[13]);
				}
				printf(" %d * %d = %d \n", StorArr[l], StorArr[m], StorArr[0]);
	        	}else if (strcasecmp(action, "SUB") == 0){
	        		
				char firstSub[MaxElemInp];
				char SecondSub[MaxElemInp];	//defines dest of MOVE
				int s = 0;
				int b = 0;
				scanf(" %s %s", firstSub, SecondSub); //store input in data
				//Check Correctness
		                if((firstSub[0]=='m'||firstSub[0]=='M') && (SecondSub[0]=='m'||SecondSub[0]=='M')){
					printf("Error!! You cannot subtract between two memory locations! \n");
					continue;
				}
				for(s = 0; s < MaxRegArrSiz; s++){ 
					if(strcasecmp(firstSub, MemoryLocArr[s]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[s], StorArr[s]);
						break;
						}	
					}
				for(b = 0; b < MaxRegArrSiz; b++){   
					if(strcasecmp(SecondSub, MemoryLocArr[b]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[b], StorArr[b]);
						break;
						}			
				}
				StorArr[0] = StorArr[b] - StorArr[s];
				if(StorArr[s] > StorArr[b]){
					StorArr[12] = 0;
					StorArr[13] = 1;
					printf("%d > %d therefore ZF = %d and SF = %d \n", StorArr[s], StorArr[b], StorArr[12], StorArr[13]);
				}else if(StorArr[s] < StorArr[b]){
					StorArr[12] = 0;
					StorArr[13] = 0;
					printf("%d < %d therefore ZF = %d and SF = %d \n", StorArr[s], StorArr[b], StorArr[12], StorArr[13]);
				}else if(StorArr[s] == StorArr[b]){
					StorArr[12] = 1;
					StorArr[13] = 0;
					printf("%d = %d therefore ZF = %d and SF = %d \n", StorArr[s], StorArr[b], StorArr[12], StorArr[13]);
				}
				printf(" %d - %d = %d \n", StorArr[b], StorArr[s], StorArr[0]);
	        	}else if (strcasecmp(action, "DIV") == 0){
	        		
				char firstDiv[MaxElemInp];
				char SecondDiv[MaxElemInp];	//defines dest of MOVE
				int di = 0;
				int v = 0;
				scanf(" %s %s", firstDiv, SecondDiv); //store input in data
				//Check CorrectEdson Zness
		                if((firstDiv[0]=='m'||firstDiv[0]=='M') && (SecondDiv[0]=='m'||SecondDiv[0]=='M')){
					printf("Error!! You cannot divide between two memory locations! \n");
					continue;
				}
				for(di = 0; di < MaxRegArrSiz; di++){ 
					if(strcasecmp(firstDiv, MemoryLocArr[di]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[di], StorArr[di]);
						break;
						}	
					}
				for(v = 0; v < MaxRegArrSiz; v++){   
					if(strcasecmp(SecondDiv, MemoryLocArr[v]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[v], StorArr[v]);
						break;
						}			
				}
				StorArr[0] = StorArr[di] / StorArr[v];
								StorArr[0] = StorArr[di] / StorArr[v];
				if(StorArr[di] > StorArr[v]){
					StorArr[12] = 0;
					StorArr[13] = 1;
					printf("%d > %d therefore ZF = %d and SF = %d \n", StorArr[di], StorArr[v], StorArr[12], StorArr[13]);
				}else if(StorArr[di] < StorArr[v]){
					StorArr[12] = 0;
					StorArr[13] = 0;
					printf("%d < %d therefore ZF = %d and SF = %d \n", StorArr[di], StorArr[v], StorArr[12], StorArr[13]);
				}else if(StorArr[di] == StorArr[v]){
					StorArr[12] = 1;
					StorArr[13] = 0;
					printf("%d = %d therefore ZF = %d and SF = %d \n", StorArr[di], StorArr[v], StorArr[12], StorArr[13]);
				}
				printf(" %d / %d = %d \n", StorArr[di], StorArr[v], StorArr[0]);
	        	}else if (strcasecmp(action, "MOD") == 0){

				char firstMod[MaxElemInp];
				char SecondMod[MaxElemInp];	//defines dest of MOVE
				int M = 0;
				int o = 0;
				scanf(" %s %s", firstMod, SecondMod); //store input in data
			        //Check Edson Correctness
		                if((firstMod[0]=='m'||firstMod[0]=='M') && (SecondMod[0]=='m'||SecondMod[0]=='M')){
					printf("Error!! You cannot find MOD between two memory locations! \n");
					continue;
				}
				for(M = 0; M < MaxRegArrSiz; M++){ 
					if(strcasecmp(firstMod, MemoryLocArr[M]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[M], StorArr[M]);
						break;
						}	
					}
				for(o = 0; o < MaxRegArrSiz; o++){   
					if(strcasecmp(SecondMod, MemoryLocArr[o]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[o], StorArr[o]);
						break;
						}			
				}
				StorArr[0] = StorArr[M] % StorArr[o];
				if(StorArr[M] > StorArr[o]){
					StorArr[12] = 0;
					StorArr[13] = 1;
					printf("%d > %d therefore ZF = %d and SF = %d \n", StorArr[M], StorArr[o], StorArr[12], StorArr[13]);
				}else if(StorArr[M] < StorArr[o]){
					StorArr[12] = 0;
					StorArr[13] = 0;
					printf("%d < %d therefore ZF = %d and SF = %d \n", StorArr[M], StorArr[o], StorArr[12], StorArr[13]);
				}else if(StorArr[M] == StorArr[o]){
					StorArr[12] = 1;
					StorArr[13] = 0;
					printf("%d = %d therefore ZF = %d and SF = %d \n", StorArr[M], StorArr[o], StorArr[12], StorArr[13]);
				}
				printf(" %d MOD %d = %d \n", StorArr[M], StorArr[o], StorArr[0]);
	        	}else if (strcasecmp(action, "COMP") == 0){
	        	
				char firstComp[MaxElemInp];
				char SecondComp[MaxElemInp];	//defines dest of MOVE
				int c = 0;
				int p = 0;
				int RegSiz = 3;
				scanf(" %s %s", firstComp, SecondComp); //store input in data
				
				//Check Correctness
		                if((firstComp[0]=='m'||firstComp[0]=='M') && (SecondComp[0]=='m'||SecondComp[0]=='M')){
					printf("Error!! You cannot compare two memory locations! \n");
					continue;
				}
				
				for(c = 0; c <= RegSiz; c++){ 
					if(strcasecmp(firstComp, MemoryLocArr[c]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[c], StorArr[c]);
						break;
						}	
					}
				for(p = 0; p <= RegSiz; p++){   
					if(strcasecmp(SecondComp, MemoryLocArr[p]) == 0){
						printf("Value stored at %s is: %d \n", MemoryLocArr[p], StorArr[p]);
						break;
						}			
				}
				if(StorArr[c] > StorArr[p]){
					StorArr[12] = 0;
					StorArr[13] = 1;
					printf("%d > %d therefore ZF = %d and SF = %d \n", StorArr[c], StorArr[p], StorArr[12], StorArr[13]);
				}else if(StorArr[c] < StorArr[p]){
					StorArr[12] = 0;
					StorArr[13] = 0;
					printf("%d < %d therefore ZF = %d and SF = %d \n", StorArr[c], StorArr[p], StorArr[12], StorArr[13]);
				}else if(StorArr[c] == StorArr[p]){
					StorArr[12] = 1;
					StorArr[13] = 0;
					printf("%d = %d therefore ZF = %d and SF = %d \n", StorArr[c], StorArr[p], StorArr[12], StorArr[13]);
				}
				
	        	}	
	       }
	       fclose(myFile);
        printf("You reached the end of your file!\n");
        }
}
/*
int ignorCommer(limitLines[]){
        
        sscanf( "%x", &data );
        return data;
}

int ignorComme(limitLines[]){
        sscanf( "%s", MemLoc );
        return MemLoc;
}
*/
