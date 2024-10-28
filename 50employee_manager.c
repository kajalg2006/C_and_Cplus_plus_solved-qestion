#include <stdio.h>
#include <stdlib.h>
int main(){
   // int chars, i =0;
   // char *ptr;

   // while(i<3){

   //  printf("Enter the number of character in the Employee ID \n");
   //  scanf("%d",&chars);
   //  ptr = (char *)malloc((chars+1)*sizeof(char));
   //  printf("your Employe ID is :\n");
   //  scanf("%s",ptr);
   //  printf("Your employee ID is %s\n",ptr);
   //  free(ptr);
   //  i = i+1;

   // }
   // return 0;

   int chars, i =0;
    char *ptr;

   while(i<3){

    printf("Enter the number of character in the Employee ID \n");
    scanf("%d",&chars);
    ptr = (char *)malloc((chars+1)*sizeof(char));
    printf("your Employe ID is :\n");
    scanf("%s",ptr);
    printf("Your employee ID is %s\n",ptr);
    free(ptr);
    i = i+1;

   }
   return 0;
}