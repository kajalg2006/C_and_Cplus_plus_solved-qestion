
#include <iostream>
#include<vector>
using namespace std;

int ocurrence(vector<int> &arr,int n, int num)
{
    int count=1;
   for(int i=0;i<n;i++)
   {
      if(arr[i]==num)
      {
          count++;
      }
   }
   return count;
}

int countElements(int x, vector<int> &a)
{
    int count=0;
    // Write your code here
    //cout<<a.size();
    for(int i=0;i<a.size();i++)
    {
        //cout<<ocurrence(a,i,a[i]);
        if(ocurrence(a,i,a[i])<=x)
        {
            count++;
        }
        else{
            break;
        }
    }
    return count;

}

int main()
{
    int b;
    vector<int> a={5,6,7,8,7,5,7,8,7};
    cout<<"Enter the values";
    cin>>b;
   cout<< " The total number of deleted array is "<<countElements(b,a);
    return 0;
}