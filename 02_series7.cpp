#include <iostream>
using namespace std;
int main(){
    int i,j,k=3,l,m=5,n=3,s=0 , fact1=1,fact2,fact3, z;
    for(i =1;i<=1;i++)
    {
        fact1=fact2=fact3=z=1;
        fact1 = fact1*i;
        
      for(j = 1; j<=m; j++){
        fact2 = fact2*j;
      }
       m++;
       for(j=1;j<=n;j++){
        fact3= fact3*j;
       }
       n++;
     for(j=1;j<=fact2;j++){
        z= z*fact3;
     }
     
    }
}