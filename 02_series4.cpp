//1!-!3+!5----
#include <iostream>
using namespace std;
int main()
{
    int i , j, sum =0, z, fact,k=1;
  for(i= 1; i<10; i+=2)
  {
    fact =1;
    for(j=1;j<=i;j++){
        fact = fact*j;
    }
    if(k){
        sum = sum+fact ;
    }
    else{
        sum = sum-fact;
        k=!k;
    }
  }
}
