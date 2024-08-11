// write a code for triangular right pattern by numbers
// ASHUTOSH SINGH
// 23070123033

#include <iostream>
using namespace std;

int main() {

    int n,k,j,i;

    cout << "Enter number of rows: ";
    cin >>n;
    k=1;
    for(int i = 1; i <=n; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout<<k<<' ';
            k++;
        }
        cout<<endl;
    }
 
}

// Output
/*
Enter number of rows: 5
1 
2 3 
4 5 6 
7 8 9 10    
*/