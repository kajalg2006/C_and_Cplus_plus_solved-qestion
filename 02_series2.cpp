

#include <iostream>
using namespace std;
int main(){
  int i ,j,f,z,s=0;
  for(i=1;i<20;i+=2){
    f=z=1;
    for(j=1; j<=i;j++){
      f =f*j;

    }
    for(j=1;j<=i;j++){
      z = z*f;
    }
  }
}