// 1^2/3!+ 7^2/9!+ 19^4/21!---------

#include <iostream>
using namespace std;
int main(){
    int i, j,k=1,l=1,m=1,s=0 ,z,fact;
    for(i=1;i<20;i++)
    {
      z=fact=1;
      for(j=1;j<=k; j = j*3){
        fact = fact*j;
      }
        k= k*3;
        for(j=1; j<=m; j++){
          z= z*l;
        }
        l = (l*2)+5;
        m = m*2;
        s = s+ z/fact; 

    }
}