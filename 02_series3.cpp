#include <iostream>
using namespace std ;
int main(){
    int fact =1, z=1;
    for(int i,k =1; i<10,k<i+1; i+=2, k++){
    fact =1;
    z =1;
        for (int j = 1; j <= i; j++)
        {
                fact = fact*j;
        }


      for (int  j = 2; j <= k*2; j++)
      {
        z = z*k;
      }

     
       
    }

}