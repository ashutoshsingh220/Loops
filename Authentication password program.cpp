// authentication password program
// ASHUTOSH SINGH
// 23070123033

#include <iostream>
using namespace std;
int main()
{
int a,t;
a=1456;
cout<<"Enter password:"<<endl;
cin>>t;
while(a!=t)
{
cout<<"enter password:"<<endl;
cin>>t;
}
cout<<"!!access granted!! :)";
}

// Output
/*
Enter password:
1234
enter password:
1456
!!access granted!! :)
*/