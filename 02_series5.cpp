//1^3/3^2  +3^7/7^5+ 5^15/15^10
#include <iostream>
using namespace std;
int main(){
    int i,j,k=1,z,sum=0,m=3,l,n=2 ,p=2,o =2;
    for(i=1;i<100;i++){
        l=z=1;
        for(j=1;j<=m; j++){
            z= z*k;

        }

        for(j=1;j<=n;j++){
           l =l*m;
        }
        p = n*2;
        n=  2*p+o;
        o++;
        m = m*2+1;
            k=k+2;
    }
}