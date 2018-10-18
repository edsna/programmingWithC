/* CS 275
 * Edson Zandamela
 * Call Trees in C
 */

#include <stdio.h>
 /*
 *This program uses function calls to determine levels of a tree while printing their values, addresses and number of descendents
 */
	//Structure
        int funca(int fCa);
        int funcb(int fCb);
        int funcc(int fCc);

    //Main
void main(){
	int numDescendents = 0; //keeps track of number of nodes
	int k = 0;
        printf("main (Level 0)\n");
			numDescendents += funca(1);
			numDescendents += funcc(1);
			numDescendents += funca(1);
			numDescendents += funcc(1);
        }

  int funca( int fCa){
        int funCalla = 0; //stores level of function call
        int j = 0;
        //Indent 4spaces * level of function call
        for(j = 0; j < 4*fCa; j++){
                printf("    ");	//Should I include this 4 spaces? or shd be 1 spc
        }
        printf("funca   level  %d %p\n", fCa, &fCa);
		funCalla += funcb(2);
		funCalla += funcc(2);
		printf("Function a has %d Descendents\n", funCalla);
		return funCalla + 1;	//updates
  }
                               
    int funcb( int fCb){
		int funCallb = 0;
        int l = 0;
        //Indent 4spaces * level of function call
        for(l = 0; l < 4*fCb; l++){
                printf("    ");
        }
        printf("funcb   level  %d %p\n", fCb, &fCb);
		funCallb += funcc(3);	//updates
		funCallb += funcc(3);	//updates
		printf("Function b has %d Descendents\n", funCallb);
		return funCallb + 1; //updates
  }

    int funcc( int fCc){
        int t = 0;
        //Indent 4spaces * level of function call
        for(t = 0; t < 4*fCc; t++){
                printf("    ");
        }
        printf("funcc   level  %d %p \n", fCc, &fCc);
		//printf("Funtion c has no Descendents");
		return 1;
  }