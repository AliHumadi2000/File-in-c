#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fil;
   char ch[100];
   fil=fopen("file-name.txt","w");
   if(fil==NULL)
    printf("File does not exit");

    printf("Enter a sentence:\n");
    fgets(ch,100,stdin);
   fprintf(fil,ch);
}
