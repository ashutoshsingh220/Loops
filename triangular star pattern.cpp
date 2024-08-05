// program for triangular star pattern.
#include <iostream>
using namespace std;
int main()
{
    int i,j,n,k=6;
    cout<<"enter a number"<<endl;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {if (j>=k)
        cout<<"* ";
        else
        cout<<" ";}
        {
         k--;
        }
        cout<<endl;
    }
}

//output
/*
enter a number
6
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
* * * * * * 
*/