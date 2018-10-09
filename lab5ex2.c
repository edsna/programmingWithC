/*
 *Structures in C
 *Edson Zandamela 
 */
 
#include<stdio.h>
#include<string.h>
#define NAME_LEN 20
#define maxSize 100

typedef struct {
   int part_no;
   char name [NAME_LEN];
   float weight;
   int quantity;
} part;
 
        part readpart(int num, char name[], float weit, int qty){
               part rpt;
               rpt.part_no = num;
               strcpy(rpt.name, name);
               rpt.weight = weit;
               rpt.quantity = qty;
               return rpt;
        }
        
        part printpart(part prt){
                printf("Part No. : %d\n", prt.part_no);
                printf("Part Name:  %s\n", prt.name);
                printf("Weight:  %f\n", prt.weight);
                printf("Quantiy:  %d\n", prt.quantity);
        }
        
        part getparts(part inv []){
        int i = 0;
        int numParts =0; 
        scanf("%d", &numParts);//reads number of parts
                for(i = 0; i < numParts; i++){
                        inv[i].part_no, inv[i].name, inv[i].weight, inv[i].quantity;
                        //printf("Item name: %s\n", item[i].name);
                }
                //return inv;
        }
        
        

int main()
{
        part part1;
        //Creates an array of structures
        part inv[100];
        printpart(part1);
        
        //readpart(part1);
        //int i;
}
