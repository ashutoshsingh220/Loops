// write a code for inverted triangular number pattern.
// ASHUTOSH SINGH
// 23070123033

#include<iostream>
 
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    k = 1;
    for(i=1;i<=n;i++)
    {
         for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
       
        for(j=1;j<=i;j++)
        {
            cout<<k<<' ';
            k++;
        }
        cout<<endl;
    }
}

// Output
/*
Enter the number:
4
      1 
    2 3 
  4 5 6 
7 8 9 10
*/