// program for right angled inverse star pattern.
#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter a number"<<endl;
    cin>>n;
    for (i=n;i<=n;i--)
    {
        for (j=1;j<=i;j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}

// output
/*
enter a number
6
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
*/