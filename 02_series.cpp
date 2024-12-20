// 1!/1^1+ 2!/2^2--
#include <iostream>
using namespace std;
int main()
{
    int i, fact, sum=0, z;
     double res;
    for (int i = 1; i < 10; i++)
    {
        z =1;
        fact =1;
        for (int j = 1; j <= i; j++)
        {
               z = z*i;
            fact = fact*j;

        }
            sum = sum+fact/z;
        
    }
     cout << "The result of the series is: " << sum << endl;
    return 0;
}