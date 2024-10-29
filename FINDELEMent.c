#include <stdio.h>
int main(){

int a[5] , s ,i;
printf(" enter elemnt of array \n");
for ( i = 0; i < 5; i++)
{
    scanf("%d",&a[i]);
}
printf("enter search elemnt ");
scanf("%d",&s);
for ( int i  = 0; i < 5; i++)
{
    if(a[i]== s){
        printf("search elmemnt is %d is found at %d",s,i);
    }
}


}