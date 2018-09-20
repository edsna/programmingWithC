
#include <stdio.h>
int main()
{
   char *test.txt;
   FILE *aa = fopen("test.txt", "r")
   
   printf("%c", getc(aa));
   printf("%c", getc(aa));
   printf("%c", getc(aa));
   printf("%c", getc(aa));

     fclose(aa);
	 getch();
     return 0;
   }