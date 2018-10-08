/*
 *Structures in C
 *Edson Zandamela 
 */
 
#include<stdio.h>
#include<string.h>
#include<string.h>
#define NAME_LEN 20

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
        
        

int main()
{
        
        part part1;
        part1 = readpart(6, "Otario", 180.0, 10);
        printpart(part1);
}
